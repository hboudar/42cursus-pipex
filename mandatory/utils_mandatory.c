/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:22 by hboudar           #+#    #+#             */
/*   Updated: 2024/04/15 14:35:21 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_mandatory.h"

static void	ft_free(char **s1, char *s2, char *s3)
{
	int	i;

	if (s1 != NULL)
	{
		i = -1;
		while (s1[++i])
			free(s1[i]);
		free(s1);
	}
	if (s2 != NULL && s3 != NULL)
	{
		free(s2);
		free(s3);
	}
}

void	check_files(int a, int b, int c, int d)
{
	if (a == -1 || b == -1)
	{
		perror("dup function");
		exit(EXIT_FAILURE);
	}
	else if (c == -1 || d == -1)
	{
		perror("close function");
		exit(EXIT_FAILURE);
	}
}

char	*check_env(char *env[], int mode)
{
	int		i;

	i = 0;
	if (mode)
	{
		if (env[i] == NULL)
			error("env");
		while (env[i] && ft_strncmp(env[i], "PATH=", 5))
			i++;
		if (env[i] && !ft_strncmp(env[i], "PATH=", 5))
			return (env[i] + 5);
		else if (env[i] == NULL)
			error("path");
	}
	else
	{
		if (env[i] == NULL)
			exit(EXIT_FAILURE);
		while (env[i] && ft_strncmp(env[i], "PATH=", 5))
			i++;
		if (env[i] == NULL)
			exit(EXIT_FAILURE);
	}
	return (NULL);
}

char	*find_path(char *cmd, char *env[], int i, int found)
{
	char	*path_env;
	char	**paths;
	char	*str;

	path_env = check_env(env, 1);
	paths = ft_split(path_env, ':');
	if (!paths)
		error("malloc function");
	while (paths[++i])
	{
		str = ft_strjoin(paths[i], "/");
		if (!str)
			error("malloc function");
		path_env = ft_strjoin(str, cmd);
		if (!path_env)
			error("malloc function");
		(!access(path_env, X_OK)) && (found = i);
		if (found != -1)
			break ;
		ft_free(NULL, str, path_env);
	}
	ft_free(paths, NULL, NULL);
	if (found == -1)
		return (NULL);
	return (path_env);
}

void	execute(char *arg_cmd, char *env[])
{
	char	**cmd;
	char	*path;

	cmd = ft_split(arg_cmd, ' ');
	if (!cmd)
		error("malloc function");
	if (ft_strchr(cmd[0], '/') == NULL)
	{
		path = find_path(cmd[0], env, 0, -1);
		if (!path)
			execve(cmd[0], cmd, env);
	}
	else
		path = cmd[0];
	if (execve(path, cmd, env) == -1)
		error("execve function");
}

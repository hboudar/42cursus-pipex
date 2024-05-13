/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:03:00 by hboudar           #+#    #+#             */
/*   Updated: 2024/04/15 14:40:37 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_mandatory.h"

void	first_process(char *av[], char *envp[], int fd[2])
{
	int	infile;

	infile = open(av[1], O_RDONLY);
	if (infile == -1)
	{
		close(fd[0]);
		close(fd[1]);
		perror("infile");
		exit(EXIT_FAILURE);
	}
	check_files(dup2(infile, 0), dup2(fd[1], 1), close(fd[0]), close(infile));
	execute(av[2], envp);
}

void	last_process(char *av[], char *env[], int fd[2])
{
	int	outfile;
	int	pid;

	outfile = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0777);
	if (outfile == -1)
	{
		close(fd[0]);
		close(fd[1]);
		error("outfile");
	}
	pid = fork();
	if (pid == -1)
		error("fork");
	if (pid == 0)
	{
		check_files(dup2(outfile, 1), 0, 0, close(outfile));
		execute(av[3], env);
	}
	else
	{
		if (waitpid(pid, NULL, 0) == -1)
			error("waitpid function");
		check_files(0, 0, 0, close(outfile));
	}
}

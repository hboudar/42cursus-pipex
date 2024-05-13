/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   here_doc_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:00:03 by hboudar           #+#    #+#             */
/*   Updated: 2024/04/04 15:16:03 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static void	here_doc_function(char *av[], t_pipex *pi)
{
	char	*str;

	close(pi->fd[0]);
	while (1)
	{
		write (1, "pipe heredoc> ", 14);
		str = get_next_line(0);
		if (ft_strlen(str) - 1 == ft_strlen(av[2])
			&& !ft_strncmp(str, av[2], ft_strlen(av[2])))
		{
			free(str);
			str = NULL;
			exit(0);
		}
		ft_putstr_fd(str, pi->fd[1]);
		free(str);
		str = NULL;
	}
}

void	here_doc(char *av[], t_pipex *pi)
{
	if (pipe(pi->fd) == -1)
		error("Pipe");
	pi->pid = fork();
	if (pi->pid == -1)
		error("Fork");
	if (pi->pid == 0)
		here_doc_function(av, pi);
	else
	{
		wait(NULL);
		close(pi->fd[1]);
		dup2(pi->fd[0], 0);
	}
}

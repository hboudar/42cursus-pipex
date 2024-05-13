/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:39:29 by hboudar           #+#    #+#             */
/*   Updated: 2024/04/04 14:54:18 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "../libft/libft.h"

typedef struct s_pipex
{
	int		infile;
	int		outfile;
	int		here_doc;
	int		i;
	int		fd[2];
	int		pid;
}	t_pipex;

char	*check_env(char *env[], int mode);
void	here_doc(char *av[], t_pipex *pi);
void	first_process(char *av[], char *envp[], t_pipex *pi);
void	next_process(char *cmd, char *env[], t_pipex *pi);
void	last_process(int ac, char *av[], char *env[], t_pipex *pi);

void	execute(char *arg_cmd, char *env[]);

void	error(char *msg);
void	check_files(int a, int b, int c, int d);

#endif

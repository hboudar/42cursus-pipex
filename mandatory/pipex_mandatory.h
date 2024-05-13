/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_mandatory.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:01:52 by hboudar           #+#    #+#             */
/*   Updated: 2024/04/13 06:52:46 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_MANDATORY_H
# define PIPEX_MANDATORY_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "../libft/libft.h"

void	error(char *msg);
char	*check_env(char *env[], int mode);
void	execute(char *arg_cmd, char *env[]);
void	check_files(int a, int b, int c, int d);

void	first_process(char *av[], char *envp[], int fd[2]);
void	last_process(char *av[], char *env[], int fd[2]);

#endif

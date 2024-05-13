/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:46:11 by hboudar           #+#    #+#             */
/*   Updated: 2024/05/10 16:15:29 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	error(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}

static int	check_args(int ac, char *av[], t_pipex *pi)
{
	pi->here_doc = 0;
	if (!ft_strncmp("here_doc", av[1], 9))
	{
		pi->here_doc = 1;
		if (ac < 6)
			return (write(2, "Error: Invalid number of arguments\n", 35));
	}
	else if (ac < 5)
		return (write(2, "Error: Invalid number of arguments\n", 35));
	return (0);
}

int	main(int ac, char **av, char *envp[])
{
	t_pipex	pi;

	if (check_args(ac, av, &pi))
		return (1);
	if (pi.here_doc)
	{
		here_doc(av, &pi);
		pi.i = 3;
	}
	else if (!pi.here_doc)
	{
		first_process(av, envp, &pi);
		pi.i = 2;
	}
	while (++pi.i < ac - 2)
		next_process(av[pi.i], envp, &pi);
	last_process(ac, av, envp, &pi);
	check_env(envp, 0);
	exit(EXIT_SUCCESS);
}

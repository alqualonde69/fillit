/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 14:17:26 by shunt             #+#    #+#             */
/*   Updated: 2019/05/27 19:20:15 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;

	if (ac != 2)
		write(1, "usage: fillit input_file\n", 25);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "usage: fillit input_file\n", 25);
			return (0);
		}
		fillit(fd);
	}
	return (0);
}

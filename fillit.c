/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:48:32 by shunt             #+#    #+#             */
/*   Updated: 2019/05/27 19:53:40 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(int fd)
{
	char	buf[546];
	char	**ttr;
	int		a;
	int		ret;

	a = 0;
	while ((ret = read(fd, &buf, 545)) > 0)
	{
		buf[ret] = '\0';
		a++;
	}
	if (a > 1 || buf[0] == '\0' || !(valbuf(buf)))
		return (error());
	else
	{
		if (!(ttr = nttr()))
			return ;
		ntr(buf, ttr);
	}
}

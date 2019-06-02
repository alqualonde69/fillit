/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valbuf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:39:25 by shunt             #+#    #+#             */
/*   Updated: 2019/05/26 00:29:10 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valbuf(char *buf)
{
	int		i;
	int		k;
	int		l;

	i = -1;
	k = 0;
	l = 0;
	if (!valf(buf))
		return (0);
	while (buf[++i])
	{
		if (i && buf[i - 1] == '\n' && buf[i] != '\n')
			k = i;
		if (i && buf[i] == '\n' && buf[i - 1] != '\n')
			if (i - k != 4 || buf[0] == '\n')
				return (0);
		if (buf[i] == '\n' && (buf[i + 1] == '\n' || buf[i + 1] == '\0'))
		{
			if (i - l != 19)
				return (0);
			l = i + 2;
		}
	}
	return (valb(buf));
}

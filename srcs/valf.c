/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:46:04 by shunt             #+#    #+#             */
/*   Updated: 2019/05/26 00:41:26 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valf(char *buf)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	while (buf[i])
		i++;
	if ((i + 1) % 21 != 0)
		return (0);
	j = -1;
	f = 0;
	while (buf[++j])
		if (buf[j] == '#')
			f++;
	return (((i + 1) / 21) * 4 == f ? 1 : 0);
}

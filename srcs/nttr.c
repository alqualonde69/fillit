/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nttr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:30:30 by shunt             #+#    #+#             */
/*   Updated: 2019/05/27 21:54:03 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**nttr(void)
{
	char	**ttr;
	int		i;

	if (!(ttr = (char **)malloc(sizeof(char *) * 5)))
		return (0);
	ttr[4] = NULL;
	i = -1;
	while (++i < 4)
		if (!(ttr[i] = (char *)malloc(sizeof(char) * 5)))
		{
			fr_ttr(ttr, i);
			return (0);
		}
	return (ttr);
}

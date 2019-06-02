/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:46:54 by shunt             #+#    #+#             */
/*   Updated: 2019/05/20 21:47:17 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**field(void)
{
	char	**fld;
	int		i;

	if (!(fld = (char **)malloc(sizeof(char *) * 25)))
		return (0);
	fld[24] = NULL;
	i = -1;
	while (++i < 24)
	{
		if (!(fld[i] = (char *)malloc(sizeof(char) * 25)))
		{
			fr_ttr(fld, i);
			return (0);
		}
		ft_memset(fld[i], 0, 24);
	}
	return (fld);
}

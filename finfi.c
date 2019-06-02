/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finfi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 18:06:06 by shunt             #+#    #+#             */
/*   Updated: 2019/05/31 14:27:28 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		finfi(t_flist **l, char **fld)
{
	int		i;
	int		j;

	i = (pref((*l), 0) / 10) - 1;
	while (fld[++i] && fld[i][0])
	{
		j = (pref((*l), i) % 10) - 1;
		while (fld[i][++j])
			if (fld[i][j] == '.')
			{
				if (pst(l, fld, i, j))
				{
					if ((*l)->next)
					{
						if (finfi(&(*l)->next, fld))
							return (1);
						else
							frsh(l, fld, i, j);
					}
					else
						return (1);
				}
			}
	}
	return (0);
}

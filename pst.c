/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:52:49 by shunt             #+#    #+#             */
/*   Updated: 2019/05/30 18:54:14 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			pst(t_flist **fi, char **fld, int i, int j)
{
	t_flist	*l;

	l = *fi;
	if (i + l->c[0] >= 0 && i + l->c[2] >= 0 && i + l->c[4] >= 0 &&
			j + l->c[1] >= 0 && j + l->c[3] >= 0 && j + l->c[5] >= 0 &&
			i + l->c[0] < 24 && i + l->c[2] < 24 && i + l->c[4] < 24 &&
			j + l->c[1] < 24 && j + l->c[3] < 24 && j + l->c[5] < 24 &&
			fld[i + l->c[0]][j + l->c[1]] == '.' &&
			fld[i + l->c[2]][j + l->c[3]] == '.' &&
			fld[i + l->c[4]][j + l->c[5]] == '.')
	{
		fld[i][j] = l->letter;
		fld[i + l->c[0]][j + l->c[1]] = l->letter;
		fld[i + l->c[2]][j + l->c[3]] = l->letter;
		fld[i + l->c[4]][j + l->c[5]] = l->letter;
		(*fi)->i = i;
		(*fi)->j = j;
		return (1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ans.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:17:22 by shunt             #+#    #+#             */
/*   Updated: 2019/05/26 01:46:19 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	pwr(int n)
{
	int		a;

	a = 0;
	while (1)
	{
		if (a * a < n)
			a++;
		else if (a * a == n)
			return (a);
		else if (a * a > n)
			n++;
	}
	return (0);
}

void		ans(t_flist **fi, char l)
{
	char	**fld;
	int		d;

	if (!(fld = field()))
		return (fr_fi(fi));
	d = pwr((l - 65) * 4);
	while (d < 25)
	{
		dots(fld, d);
		if (finfi(fi, fld))
			break ;
		else
			d++;
	}
	if (d < 25)
		prans(fld);
	d = -1;
	while (++d < 24)
		free(fld[d]);
	free(fld);
	fld = NULL;
	fr_fi(fi);
}

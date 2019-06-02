/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valsh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:11:22 by shunt             #+#    #+#             */
/*   Updated: 2019/05/27 21:55:38 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	exsh(char **ttr, int i, int j)
{
	if (i > 0 && j > 0 && i < 3 && ttr[i - 1][j] == '#' &&
			ttr[i][j - 1] == '#' && ttr[i + 1][j - 1] == '#')
		return (1);
	else if (j > 1 && i < 3 && ttr[i][j - 1] == '#' &&
			ttr[i + 1][j - 2] == '#' && ttr[i + 1][j - 1] == '#')
		return (1);
	else if (j > 0 && i < 2 && ttr[i][j - 1] == '#' &&
			ttr[i + 1][j - 1] == '#' && ttr[i + 2][j - 1] == '#')
		return (1);
	else if (j > 1 && i < 3 && ttr[i][j - 2] == '#' &&
			ttr[i][j - 1] == '#' && ttr[i + 1][j - 2] == '#')
		return (1);
	else if (i > 0 && j > 0 && i < 3 && ttr[i - 1][j - 1] == '#' &&
			ttr[i][j - 1] == '#' && ttr[i + 1][j - 1] == '#')
		return (1);
	else if (j > 1 && i < 3 && ttr[i][j - 2] == '#' &&
			ttr[i][j - 1] == '#' && ttr[i + 1][j - 1] == '#')
		return (1);
	return (0);
}

int			valsh(char **ttr)
{
	int		i;
	int		j;
	int		f;

	f = 0;
	i = -1;
	while (ttr[++i])
	{
		j = -1;
		while (ttr[i][++j])
		{
			if (ttr[i][j] == '#')
				f++;
			if (f < 4 && ttr[i][j] == '#' && !((j < 3 &&
							ttr[i][j + 1] == '#') ||
						(i < 3 && ttr[i + 1][j] == '#')))
				return (exsh(ttr, i, j));
		}
	}
	return (1);
}

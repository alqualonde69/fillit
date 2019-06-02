/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:32:13 by shunt             #+#    #+#             */
/*   Updated: 2019/05/21 21:49:52 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		strc(t_flist **fi, char **ttr, char l)
{
	t_flist		*new;
	t_flist		*f;

	if (!(new = (t_flist *)malloc(sizeof(t_flist))))
		return (0);
	new->letter = l;
	new->next = NULL;
	new->prev = NULL;
	new->i = 0;
	new->j = 0;
	path(ttr, -1, -1, &new);
	if (!(*fi))
		*fi = new;
	else
	{
		f = *fi;
		while (f->next)
			f = f->next;
		f->next = new;
		f->next->prev = f;
	}
	return (1);
}

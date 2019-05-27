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
	pth(&new, ttr);
	if (!(*fi))
		*fi = new;
	else
	{
		f = *fi;
		while (f->next)
			f = f->next;
		f->next = new;
	}
	return (1);
}

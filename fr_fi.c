/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_tfi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:59:24 by shunt             #+#    #+#             */
/*   Updated: 2019/05/20 22:23:12 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fr_fi(t_flist **fi)
{
	t_flist	*t;

	while ((*fi))
	{
		t = *fi;
		*fi = (*fi)->next;
		free(t);
	}
	*fi = NULL;
}
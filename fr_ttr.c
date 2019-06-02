/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_ttr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:41:08 by shunt             #+#    #+#             */
/*   Updated: 2019/05/21 21:14:47 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fr_ttr(char **ttr, int i)
{
	while (--i >= 0)
		free(ttr[i]);
	free(ttr);
	ttr = NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:50:06 by shunt             #+#    #+#             */
/*   Updated: 2019/05/27 23:11:26 by shunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../libft/libft.h"

typedef struct		s_flist
{
	char			letter;
	int				c[6];
	int				i;
	int				j;
	struct s_flist	*next;
	struct s_flist	*prev;
}					t_flist;

void				error(void);

int					pref(t_flist *fi, int i);

int					nfi(char **ttr, t_flist **fi, char *a);

void				ans(t_flist **fi, char l);

void				fillit(int fd);

int					valbuf(char *buf);

int					valsh(char **ttr);

char				**nttr(void);

void				ntr(char *buf, char **ttr);

int					strc(t_flist **fi, char **ttr, char l);

void				fr_ttr(char **ttr, int i);

void				prans(char **fld);

int					finfi(t_flist **l, char **fld);

int					valb(char *buf);

int					valf(char *buf);

char				**field(void);

void				dots(char **fld, int d);

void				path(char **ttr, int i, int j, t_flist **n);

int					pst(t_flist **fi, char **fld, int i, int j);

void				frsh(t_flist **fi, char **fld, int i, int j);

void				fr_tf(char **ttr, t_flist **fi, int i);

void				fr_fi(t_flist **fi);

#endif

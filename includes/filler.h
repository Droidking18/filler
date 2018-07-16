/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:47:47 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/16 16:47:21 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"

typedef struct	s_filler
{
	int				w;
	int				h;
	int				rating;
	struct s_filler	*next;
}				t_filler;
typedef struct	s_map
{
	int		w;
	int		h;
	char	**map;
	int		geff;
}				t_map;
typedef struct	s_token
{
	int		w;
	int		h;
	char	**token;
}				t_token;
typedef struct	s_savespace
{
	int		j;
	int		i;
}				t_savespace;
t_map			read_map();
t_token			read_token();
int				read_piece();
int				compare();
int				distance_calc(int ha, int wa, int hb, int wb);
float				sqroot(int a, int b);

#endif

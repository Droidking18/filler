/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:47:47 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/19 10:37:35 by dkaplan          ###   ########.fr       */
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
	int		first_w;
	int		first_h;
	char	**token;
}				t_token;
typedef struct	s_savespace
{
	int		j;
	int		i;
}				t_savespace;
typedef struct	s_savelines
{
	t_map			map;
	t_filler		moves;
	t_token			token;
	t_savespace		coords;
}				t_savelines;
t_map			read_map();
t_token			read_token();
int				read_piece();
int				compare();
int				distance_calc(int ha, int wa, int hb, int wb);
void			print_optim(t_filler *moves);

#endif

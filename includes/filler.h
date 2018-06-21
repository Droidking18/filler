/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:47:47 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/19 17:12:03 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"

typedef struct	s_filler
{
	int		p1;
	int		p2;
	char	**map;
	char	**token;
	int		tok_x;
	int		tok_y;
	int		map_x;
	int		map_y;
}				t_filler;

typedef struct	s_map
{
	int		x;
	int		y;
}				t_map;
char			**read_map(void);
char			**read_token(void);

#endif

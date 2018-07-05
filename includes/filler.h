/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:47:47 by dkaplan           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/04 16:25:09 by dkaplan          ###   ########.fr       */
=======
/*   Updated: 2018/06/28 15:29:16 by dkaplan          ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
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
	int		w;
	int		h;
	char	**map;
}				t_map;
<<<<<<< HEAD
typedef struct  s_token
{
	int		w;
	int		h;
	char	**token;
}				t_token;
t_map			read_map();
t_token			read_token();
=======
char			**read_map(int fd);
char			**read_token();
>>>>>>> refs/remotes/origin/master
int				read_piece(void);
void			compare();	

#endif

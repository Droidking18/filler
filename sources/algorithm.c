/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/18 16:49:19 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include <stdio.h>

int			star_check(t_token *token, char **map, int x, int y)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (i < token->h)
	{
		j = 0;
		while (j < token->w)
		{
			if (token->token[i][j] == '*' && map[i + x][j + y] == 'Y')
				k++;
			if (token->token[i][j] == '*' && map[i + x][j + y] != 'Y'
					&& map[i + x][j + y] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (k);
}

void		ft_lstaddto(t_filler **head, int i, int j)
{
	t_filler *node;

	node = malloc(sizeof(t_filler));
	node->w = i;
	node->h = j;
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return ;
}

void		ft_checkclosest(t_filler *moves, t_map map, int x, t_token t)
{
	t_savespace o;

	o.i = t.first_w;
	o.j = t.first_h;
	while (moves)
	{
		moves->rating = 1000000;
		while (map.map[o.i][o.j])
		{
			if (map.map[o.i][o.j] != 'Y' && map.map[o.i][o.j] != '.' && map.map[o.i][o.j])
				if (moves->rating > distance_calc(o.i, o.j, moves->h , moves->w))
					moves->rating = distance_calc(o.i, o.j, moves->h, moves->w);
			o.j++;
			if (!map.map[o.i][o.j + 1])
			{
				o.j = 0;
				o.i++;
			}
			if (o.i == x)
				break ;
		}
		o.i = 0;
		o.j = 0;
		moves = moves->next;
	}
}

int			compare(int piece)
{
	t_savespace	coords;
	t_map		map;
	t_token		token;
	t_filler	*moves;

	moves = NULL;
	map = read_map(piece);
	if (map.geff == 1)
		return (1);
	token = read_token();
	coords.i = 0;
	while (coords.i <= (map.h - token.h))
	{
		coords.j = 0;
		while (coords.j <= (map.w - token.w))
		{
			if (star_check(&token, map.map, coords.i, coords.j) == 1)
				ft_lstaddto(&moves, coords.i, coords.j);
			coords.j++;
		}
		coords.i++;
	}
	if (moves == NULL)
		return (1);
	ft_checkclosest(moves, map, map.h, token);
	print_optim(moves);
	return (0);
}

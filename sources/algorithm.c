/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/19 10:45:38 by dkaplan          ###   ########.fr       */
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

void		ft_checkclosest(t_filler *m, t_map map, int x, t_token t)
{
	t_savespace o;

	while (m)
	{
		o.i = t.first_w;
		o.j = t.first_h;
		m->rating = 1000000;
		while (map.map[o.i][o.j])
		{
			if (map.map[o.i][o.j] != 'Y' && map.map[o.i][o.j] != '.'
					&& map.map[o.i][o.j])
				if (m->rating > distance_calc(o.i, o.j, m->h, m->w))
					m->rating = distance_calc(o.i, o.j, m->h, m->w);
			o.j++;
			if (!map.map[o.i][o.j + 1])
			{
				o.j = 0;
				o.i++;
			}
			if (o.i == x)
				break ;
		}
		m = m->next;
	}
}

int			compare(int piece)
{
	t_filler		*moves;
	t_savelines		a;

	moves = NULL;
	a.map = read_map(piece);
	if (a.map.geff == 1)
		return (1);
	a.token = read_token();
	a.coords.i = 0;
	while (a.coords.i <= (a.map.h - a.token.h))
	{
		a.coords.j = 0;
		while (a.coords.j <= (a.map.w - a.token.w))
		{
			if (star_check(&a.token, a.map.map, a.coords.i, a.coords.j) == 1)
				ft_lstaddto(&moves, a.coords.i, a.coords.j);
			a.coords.j++;
		}
		a.coords.i++;
	}
	if (moves == NULL)
		return (1);
	ft_checkclosest(moves, a.map, a.map.h, a.token);
	print_optim(moves);
	return (0);
}

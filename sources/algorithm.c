/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/04 17:13:30 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include <stdio.h>

int		star_check(t_token *token, char **map, int x, int y)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (token->token[i][j] && map[i + x][j + y] && j < token->w && i < token->h)
	{
		dprintf(2, "a %d %d\n", i, j);
		if (token->token[i][j] == '*' && map[i + x][j + y] == 'Y')
			k++;
		if (j == token->w)
		{
			j = 0;
			i++;
		}
		j++;
	}
	dprintf(2, "%d\n", k);
	return (k);
}

void	compare()
{
	int i;
	int j;
	t_map map;
	t_token token;

	dprintf(2, "we are reading the map\n");
	map = read_map();
	dprintf(2, "we are reading the token\n");
	token = read_token();
	dprintf(2, "awoo\n");
	i = 0;
	while (i < map.w - token.w - 1)
	{
		j = 0;
		while (j < map.h - token.h - 1)
		{
			//dprintf(2, "trying to do the sex at %d,%d\n", i, j);
			if (star_check(&token, map.map, i, j) == 1)
			{
				dprintf(2, "%d %d\n", map.w, map.h);
			}
			j++;
		}
		i++;
	}
}

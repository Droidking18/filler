/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/13 10:33:05 by dkaplan          ###   ########.fr       */
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
	while (i < token->h)
	{
		j = 0;
		while (j < token->w)
		{
			if (token->token[i][j] == '*' && map[i + x][j + y] == 'Y')
				k++;
			j++;
		}
		i++;
	}
	return (k);
}

void	ft_fuck_off(int i, int j)
{
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(j);
	ft_putchar('\n');
}

int		compare(int piece)
{
	int i;
	int j;
	t_map map;
	t_token token;

	map = read_map(piece);
	if (map.geff == 1)
		return (1);
	token = read_token();
	i = 0;
	while (i <= (map.h - token.h))
	{
		j = 0;
		while (j <= (map.w - token.w))
		{
			if (star_check(&token, map.map, i, j)  == 1)
			{
				ft_fuck_off(i, j);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(map.map);
	free(token.token);
	return (0);
}

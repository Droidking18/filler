/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/12 13:49:08 by dkaplan          ###   ########.fr       */
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
	dprintf(2, ">>>>%d", token->h + 1);
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

void	compare(int piece)
{
	int i;
	int j;
	t_map map;
	t_token token;

	map = read_map(piece);
	token = read_token();
	i = 0;
	while (i <= (map.h - token.h))
	{
		j = 0;
		while (j <= (map.w - token.w))
		{
			write(2, "GGGG ", 5);
			if (star_check(&token, map.map, i, j)  == 1)
			{
				ft_putnbr(i);
				ft_putchar(' ');
				ft_putnbr(j);
				ft_putchar('\n');
				return ;
			}
			j++;
		}
		i++;
	}
	free(map.map);
	return ;
}

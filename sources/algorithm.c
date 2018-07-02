/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/02 14:26:09 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		ft_is_piece(char c, char player)
{
	return (c == player);
}

int		star_check(char **token, char **map, int x, int y)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (token[i][j] && map[i][j] && j <= x && i <= y)
	{
		if (token[i][j] == '*' && map[i][j] == 'Y')
			k++;
		if (j == x)
		{
			j = 0;
			i++;
		}
		j++;
	}
	return (k);
}

t_map	compare()
{
	int i;
	int j;
	char **map;
	char **token;
	t_map coords;

	coords.x = 0;
	coords.y = 0;
	map = read_map();
	token = read_token();
	while (read_map())
	{
		if (star_check(token, map, coords.x, coords.y) == 1)
			return (coords);
		else
			coords.y++;



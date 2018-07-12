/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/12 10:01:49 by dkaplan          ###   ########.fr       */
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
	while (i < token->h && j < token->w)
	{
		/*dprintf(2, "%di < , h%d", i, token->h);
		dprintf(2, "%dj < , w%d", j, token->w);
		dprintf(2, "%s", map[i]);
		dprintf(2, "%s", token->token[i]);
		dprintf(2, "grrr %c, %c\n", token->token[i][j], map[i + x][j + y]);
		dprintf(2, "a %d %d\n", i, j);*/
		if (token->token[i][j] == '*' && map[i + x][j + y] == 'Y')
			k++;
		j++;
		if (j == token->h)
		{
			j = 0;
			i++;
		}
		write(2, "lo", 2);
	}
	if (k == 1)
	{
		dprintf(2, "OOOOOOOOOOOOOOOOOOONNNNNNNNNNNNNNNNNNNNEEEEEEEEEEEEEEE%d\n", k);
	}
		write(2, "hi" ,2);
	dprintf(2, "star chck complete with %d matches found", k);
	return (k);
}

int		compare(int piece)
{
	int i;
	int j;
	t_map map;
	t_token token;

	dprintf(2, "we are reading the map\n");
	map = read_map(piece); /// ok
//	if (map.h == 2009809808)
//		return(1);
	dprintf(2, "we are reading the token\n");
	token = read_token(); /// ok
	dprintf(2, "awoo\n");
	i = 0;
	while (i < map.h - token.h) ///// THERES A SEGFAULT IN THIS WHILE LOOP
	{
		write(2, "no", 2);
		j = 0;
		while (j < map.w - token.w - 1)
		{
			dprintf(2, "trying to do the sex at %d,%d\n", i, j);
			if (star_check(&token, map.map, i, j) == 1)
			{
				dprintf(1, "%d %d\n", i, j);
				dprintf(2, "<<<<<<<<<STDIN: %d %d>>>>>>>>>>\n", i, j);
				dprintf(2, "HIIIIIIIIIIIIIIIIII");
				return (0);
			}
			j++;
		}
		i++;
	}
	write(2, "po", 2);
	return (0);
}

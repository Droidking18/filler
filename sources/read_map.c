/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:28:41 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/17 13:45:04 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"

t_map		read_head_map(void)
{
	char	*line;
	t_map	ret;

	ret.geff = 0;
	if (!(get_next_line(0, &line)))
	{
		ret.geff = 1;
		return (ret);
	}
	ret.h = ft_atoi(line + 8);
	if (ret.h > 99)
		ret.w = ft_atoi(line + 12);
	else if (ret.h > 9)
		ret.w = ft_atoi(line + 11);
	else
		ret.w = ft_atoi(line + 10);
	free(line);
	return (ret);
}

void		converter(char **map, int piece, int x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i][j])
	{
		if ((piece == 0 && (map[i][j] == 'O' || map[i][j] == 'o'))
				|| (piece == 1 && (map[i][j] == 'X' || map[i][j] == 'x')))
			map[i][j] = 'Y';
		if (!map[i][j + 1])
		{
			j = -1;
			i++;
		}
		if (i >= x)
			break ;
		j++;
	}
}

t_map		read_map(int piece)
{
	char		**ret;
	int			i;
	t_map		coords;

	i = 0;
	coords = read_head_map();
	if (coords.geff == 1)
		return (coords);
	ret = (char **)malloc(sizeof(char*) * coords.h + 1);
	get_next_line(0, &ret[i]);
	free(ret[i]);
	while (i < coords.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		ret[i] = ft_strsub(ret[i], 4, coords.w);
		i++;
	}
	ret[i] = NULL;
	converter(ret, piece, coords.h);
	coords.map = ret;
	i = 0;
	return (coords);
}

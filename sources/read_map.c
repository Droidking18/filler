/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:36 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/12 10:36:18 by dkaplan          ###   ########.fr       */
/*   Updated: 2018/06/29 14:07:47 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

t_map		read_head_map()
{
	char	*line;
	char	number[10];
	int		i;
	int		j;
	t_map	ret;

	i = 8;
	j = 0;
	dprintf(2, "B4 GNL");
	get_next_line(0, &line);
	write(2, "Done read", 9);
	//read(0, line, 30);
	//dprintf(2, "LINE:                           %s", line);
	while (ft_isdigit(line[i]) || line[i] == ' ')
	{
		number[j] = line[i];
		i++;
		j++;
	}
	ret.h = ft_atoi(number);
	if (ret.h > 9)
		ret.w = ft_atoi(number + 3);
	else
		ret.w = ft_atoi(number + 2);
	dprintf(2, "................THIS IS LINE:           %s, with coords.h being %d, and .w being %d.............", line, ret.h, ret.w);
	free(line);
	return (ret);
}

void    converter(char **map, int piece, int x)
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
	printf("got size: %d %d\n", coords.w, coords.h);
	//if (!coords.w || !coords.h)
	//{
	//	dprintf(2, "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOhit the breakOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
	//	coords.h = 2009809808;
	//	return (coords);
	//}
	ret = (char **)malloc(sizeof(char*) * coords.h + 1);
	get_next_line(0, &ret[i]);
	while(i < coords.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		ret[i] = ft_strsub(ret[i] ,4 ,coords.w);
		i++;
	}
	ret[i] = NULL;
    converter(ret, piece, coords.h);
	coords.map = ret;
	i = 0;
	return (coords);
}

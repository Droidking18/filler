/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:36 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/28 17:17:02 by dkaplan          ###   ########.fr       */
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
	get_next_line(0, &line);
	while (ft_isdigit(line[i]) || line[i] == ' ')
	{
		number[j] = line[i];
		i++;
		j++;
	}
	ret.x = ft_atoi(number);
	if (ret.x > 9)
		ret.y = ft_atoi(number + 3);
	else
		ret.y = ft_atoi(number + 2);
//	printf("X:<%d>, Y:<%d>\n", ret.x, ret.y);
	return (ret);
}

void    converter(char **map, int piece)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (map[i][j])
    {
        if (piece == 0 && (map[i][j] == 'O' || map[i][j] == 'o'))
        {
            map[i][j] = 'Y';
            j++;
        }
        else if (piece == 1 && (map[i][j] == 'X' || map[i][j] == 'x'))
        {
            map[i][j] = 'Y';
            j++;
        }
        else if (map[i][j])
            j++;
        if (!map[i][j])
        {
            j = 0;
            i++;
        }
    }
}

char		**read_map(int piece)
{
	char		**ret;
	int			i;
	t_map		coords;

	i = 0;
	coords = read_head_map();
	ret = (char **)malloc(sizeof(char**) * coords.x + 1);
	get_next_line(0, &ret[i]);
	free(ret[i]);
	while(i < coords.x)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		i++;
	}
	ret[i] = NULL;
	i = 0;
	while (ret[i])
	{
		ret[i] = ft_strsub(ret[i] ,4 ,coords.y);
		i++;
	}
    converter(ret, piece);
	return (ret);
}

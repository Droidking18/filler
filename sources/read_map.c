/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:36 by dkaplan           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/04 17:13:39 by dkaplan          ###   ########.fr       */
=======
/*   Updated: 2018/06/29 14:07:47 by dkaplan          ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
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
	ret.w = ft_atoi(number);
	if (ret.w > 9)
		ret.h = ft_atoi(number + 3);
	else
<<<<<<< HEAD
		ret.h = ft_atoi(number + 2);
=======
		ret.y = ft_atoi(number + 2);
>>>>>>> refs/remotes/origin/master
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
<<<<<<< HEAD
        if ((piece == 0 && (map[i][j] == 'O' || map[i][j] == 'o'))
=======
        if ((piece == 0 && (map[i][j] == 'O' || map[i][j] == 'o')) 
>>>>>>> refs/remotes/origin/master
				|| (piece == 1 && (map[i][j] == 'X' || map[i][j] == 'x')))
        {
            map[i][j] = 'Y';
            j++;
        }
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

<<<<<<< HEAD
t_map		read_map(int piece)
=======
char		**read_map(int piece)
>>>>>>> refs/remotes/origin/master
{
	char		**ret;
	int			i;
	t_map		coords;

	i = 0;
	coords = read_head_map();
	ret = (char **)malloc(sizeof(char**) * coords.w + 1);
	get_next_line(0, &ret[i]);
	free(ret[i]);
	while(i < coords.w)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		i++;
	}
	ret[i] = NULL;
	i = 0;
	while (ret[i])
	{
<<<<<<< HEAD
		ret[i] = ft_strsub(ret[i] ,4 ,coords.h);
		ret[i][coords.h] = 0;
		i++;
	}
	ret[coords.w] = NULL;
    converter(ret, piece, coords.w);
	coords.map = ret; 
	return (coords);
=======
		ret[i] = ft_strsub(ret[i] ,4 ,coords.y);
		ret[i][coords.y] = 0;
		i++;
	}
	ret[coords.x] = NULL;
    converter(ret, piece, coords.x);
	return (ret);
>>>>>>> refs/remotes/origin/master
}

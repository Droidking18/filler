/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:03:16 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/21 10:53:12 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

t_map		read_head_token(void)
{
	char	*line;
	char	number[10];
	int		i;
	int		j;
	t_map	ret;

	i = 6;
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
	printf("XX%d, YY%d", ret.x, ret.y);
	return (ret);
}

char		**read_token(void)
{
	char		**ret;
	int			i;
	t_map		coords;

	i = 0;
	coords = read_head_token();
	ret = (char **)malloc(sizeof(**ret) * coords.x + 1);
	while(i < coords.x)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		printf("$$$$$%s$$$$$\n", ret[i]);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

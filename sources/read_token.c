/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:03:16 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/11 17:30:37 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

t_token		read_head_token()
{
	char	*line;
	char	number[10];
	int		i;
	int		j;
	t_token	ret;

	i = 6;
	j = 0;
	get_next_line(0, &line);
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
	return (ret);
}

t_token		read_token()
{
	char		**ret;
	int			i;
	t_token		res;

	i = 0;
	res = read_head_token();
	ret = (char **)malloc(sizeof(char**) * res.h + 1);
	while(i < res.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		i++;
	}
	ret[i] = NULL;
	i = 0;
	res.token = ret;	
	return (res);
}

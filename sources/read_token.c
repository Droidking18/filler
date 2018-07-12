/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:03:16 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/12 15:00:09 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

t_token		read_head_token()
{
	char	*line;
	int		i;
	int		j;
	t_token	ret;

	i = 6;
	j = 0;
	get_next_line(0, &line);
	ret.h = ft_atoi(line + 6);
	if (ret.h > 9)
		ret.w = ft_atoi(line + 9);
	else
		ret.w = ft_atoi(line + 8);
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

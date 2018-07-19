/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:03:16 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/19 14:54:19 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"

t_token		read_head_token(void)
{
	char	*line;
	t_token	ret;

	get_next_line(0, &line);
	ret.h = ft_atoi(line + 6);
	if (ret.h > 9)
		ret.w = ft_atoi(line + 9);
	else
		ret.w = ft_atoi(line + 8);
	return (ret);
}

t_token		get_firsts(t_token res)
{
	int			i;
	int			j;
	t_token		star;

	i = 0;
	star.w = res.w;
	star.h = res.h;
	star.token = res.token;
	while (i < star.h)
	{
		j = 0;
		while (j < star.w)
		{
			if (star.token[i][j] == '*')
			{
				star.first_w = i;
				star.first_h = j;
			}
			j++;
		}
		i++;
	}
	return (star);
}

t_token		read_token(void)
{
	char		**ret;
	int			i;
	t_token		res;

	i = 0;
	res = read_head_token();
	ret = (char **)malloc(sizeof(char**) * res.h + 1);
	while (i < res.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		i++;
	}
	ret[i] = NULL;
	i = 0;
	res.token = ret;
	res = get_firsts(res);
	return (res);
}

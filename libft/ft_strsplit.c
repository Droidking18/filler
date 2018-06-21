/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:07:54 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/18 14:39:18 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_wordcount(const char *str, char c, int i)
{
	if (*str == 0)
		return (i);
	else if (*str == c && *(str + 1) == c)
		return (ft_wordcount(str + 1, c, i));
	else if (((*str != c) && (*str != 0)) && ((*(str + 1) == c)
				|| (*(str + 1) == 0)))
		return (ft_wordcount(str + 1, c, i + 1));
	else
		return (ft_wordcount(str + 1, c, i));
}

static int		ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		wordcount;
	int		index;
	int		i;

	i = 0;
	index = 0;
	if (!s)
		return (0);
	wordcount = ft_wordcount(s, c, i);
	i = 0;
	if (!(res = (char **)malloc(sizeof(*res) * (ft_wordcount(s, c, i) + 1))))
		return (NULL);
	while (wordcount--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(res[index] = ft_strsub(s, 0, ft_wlen(s, c))))
			return (NULL);
		s = s + ft_wlen(s, c);
		index++;
	}
	res[index] = NULL;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:01:05 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/28 11:54:33 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int		ft_isws(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char			*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	k = ft_strlen(s);
	j = 0;
	i = 0;
	while (s[i] && ft_isws(s[i]))
		i++;
	while (s[k - 1] && ft_isws(s[k - 1]))
		k--;
	if (i > k)
		return (ft_strnew(0));
	if (!(r = ft_strnew(k - i)))
		return (NULL);
	while (i < k)
		r[j++] = s[i++];
	return (r);
}

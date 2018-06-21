/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:55:58 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/22 17:31:16 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t le;

	i = 0;
	le = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char*)haystack);
	if (haystack[0] == 0)
		return (NULL);
	while (haystack[i] && (le + i <= len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i < len))
		{
			if (j == le - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

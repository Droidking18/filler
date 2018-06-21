/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:39:17 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/22 16:52:39 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char*)haystack);
	if (haystack[0] == 0)
		return (NULL);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == len - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:53:17 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/18 08:12:39 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
		if (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		else
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
	return (dst);
}

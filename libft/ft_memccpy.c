/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:58:43 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/22 16:53:16 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	ptr = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	while (i < n)
	{
		ptr[i] = (src2[i]);
		if (src2[i] == (unsigned char)c)
			return (ptr + i + 1);
		i++;
	}
	return (NULL);
}

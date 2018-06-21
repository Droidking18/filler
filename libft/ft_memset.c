/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 17:41:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/17 14:32:28 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

void	*ft_memset(void *in, int data, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)in;
	while (len > 0)
	{
		*(ptr++) = data;
		len--;
	}
	return (in);
}

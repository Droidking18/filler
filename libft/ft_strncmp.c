/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:49:40 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/23 10:41:31 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (i);
	while (*s1 && *s2 && *s1 == *s2 && i + 1 < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

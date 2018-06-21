/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:20:01 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/29 14:00:12 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	str = (char*)s;
	i = ft_strlen(s);
	while (i > 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char*)str + i);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:17:33 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/28 11:44:34 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *r;
	char *d1;
	char *d2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	d1 = (char*)s1;
	d2 = (char*)s2;
	if (!(r = ft_strnew(ft_strlen(d1) + ft_strlen(d2) + 1)))
		return (NULL);
	r = ft_strcat(r, d1);
	r = ft_strcat(r, d2);
	return (r);
}

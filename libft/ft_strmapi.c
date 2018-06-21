/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:41:46 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/28 12:49:40 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s || !f)
		return (0);
	if (!(str = ft_strnew((int)ft_strlen(s))))
		return (NULL);
	while (*s)
		str[i++] = (*f)(j++, (char)*s++);
	return (str);
}

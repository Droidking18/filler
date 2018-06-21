/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:55:52 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/28 12:50:09 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(str = ft_strnew((int)ft_strlen(s))))
		return (NULL);
	while (*s)
		str[i++] = (*f)((char)*s++);
	return (str);
}

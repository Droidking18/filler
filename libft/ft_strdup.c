/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 17:42:34 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/16 17:04:32 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = ((char*)malloc(sizeof(char) * ft_strlen(s1) + 1));
	if (s2 == 0)
		return (0);
	else
		return (ft_strcpy(s2, s1));
}

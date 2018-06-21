/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:54:14 by dkaplan           #+#    #+#             */
/*   Updated: 2018/05/29 13:50:43 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_makenull(char *c)
{
	*c = '\0';
}

static void	ft_addtostr(char *str)
{
	int		i;
	char	*src;

	src = "-2147483648";
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
}

static char	*ft_iszeroormin(int i)
{
	char *str;

	str = "";
	if (i == -2147483648)
	{
		if (!(str = (char *)malloc((sizeof(char) * 12))))
			return (NULL);
		ft_addtostr(str);
		return (str);
	}
	if (i == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
		str[1] = 0;
	}
	return (str);
}

static int	ft_intlen(int i)
{
	int j;

	j = 0;
	while (i != 0 && j++ <= 10)
		i /= 10;
	return (j);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	int		sign;
	char	*str;

	if (n == 0 || n == -2147483648)
		return (ft_iszeroormin(n));
	j = ft_intlen(n);
	sign = 'i';
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	i = ft_intlen(n);
	if (!(str = (char *)malloc((sizeof(char) * (i + 2)))))
		return (NULL);
	(sign == '-') ? (str[0] = '-') : (i--);
	while (n != 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	(sign == '-') ? ((ft_makenull(&str[j + 1]))) : ((ft_makenull(&str[j])));
	return (str);
}

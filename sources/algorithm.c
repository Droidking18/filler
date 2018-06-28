/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:42:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/28 12:22:48 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		ft_is_piece(char c, char player)
{
	return (c == player);
}

int		star_check(char *str1, char *str2, char player)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] == '*' && ft_is_piece(str2[i], player))
			j++;
		i++;
	}
	return (j);
}

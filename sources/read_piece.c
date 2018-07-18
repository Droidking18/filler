/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:39:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/18 17:23:25 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

int		read_piece(void)
{
	char	*str;
	int		j;

	j = 0;
	get_next_line(0, &str);
	while (str[j])
	{
		if (str[j] == '2')
			return (1);
		else if (str[j] == '1')
			return (0);
		j++;
	}
	free(str);
	return (0);
}

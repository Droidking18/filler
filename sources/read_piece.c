/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:39:28 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/09 16:44:28 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/filler.h"
#include <stdio.h>

int		read_piece(void)
{
	char 	*str;
	int		i;

	get_next_line(0, &str);
	i = (ft_strcmp(str, "$$$ exec p1 : [./filler]") ? 1 : 0);
	//§free(str);
	dprintf(2, "%d\n", i);
	return(i);
}

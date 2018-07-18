/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:31:34 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/18 16:49:47 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/filler.h"

int		distance_calc(int ha, int wa, int hb, int wb)
{
	//dprintf(2, "\nComparing: %d and %d with %d and %d\n\n", wa, ha, wb, hb);
	return ((((ha - wb) * (ha - wb)) + ((wa - hb) * (wa - hb))));
}

void	print_optim(t_filler *moves)
{
	int rating;
	int w;
	int h;

	rating = 10000000;
	h = moves->h;
	w = moves->w;
	while (moves)
	{
		if (rating > moves->rating)
		{
			rating = moves->rating;
			w = moves->w;
			h = moves->h;
		}
		//dprintf(2, "\n\n\nRating:%d FOR COORDS %d and %d\n\n\n", moves->rating, moves->w, moves->h);
		moves = moves->next;
	}
	ft_putnbr(w);
	ft_putchar(' ');
	ft_putnbr(h);
	ft_putchar('\n');
}

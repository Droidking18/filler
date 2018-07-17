/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:31:34 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/17 12:26:09 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/filler.h"

int		distance_calc(int ha, int wa, int hb, int wb)
{
	return ((((ha - hb) * (ha - hb)) + ((wa - wb) * (wa - wb))));
}

void	print_optim(t_filler *moves)
{
	int rating;
	int w;
	int h;


	rating = 10000000;
	h = moves->h;
	w = moves->w;
	//dprintf(2, "||||||||||w%d|||||||||", moves->w);
	//dprintf(2, "||||||||||w%d|||||||||", moves->h);
	//dprintf(2, "||||||||||w%d|||||||||", moves->rating);
	while (moves)
	{
		if (rating > moves->rating)
		{
			write(2, "DING DONG DITCH", 15);
			rating = moves->rating;
			w = moves->w;
			h = moves->h;
		}
		moves = moves->next;
	}
	ft_putnbr(w);
	//dprintf(2, "||||||||||w%d|||||||||", w);
	ft_putchar(' ');
	ft_putnbr(h);
	//dprintf(2, "||||||||||h%d|||||||||", h);
	//dprintf(2, "||||||||||h%d|||||||||", rating);
	ft_putchar('\n');
	h = 0;
	w = 0;
	rating = 0;
}

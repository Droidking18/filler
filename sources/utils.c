/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:31:34 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/16 16:55:43 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/filler.h"

int		distance_calc(int ha, int wa, int hb, int wb)
{
	int x;

	dprintf(2, "<<<<<<<<<<%d, %d, %d, %d>>>>>>>>>>", ha, hb, wa, wb);
	x = ((ha) * (hb) + (wa) * (wb));
	return (sqroot((float)x / 2, x));
}

float		sqroot(int x,int n)
{
    float t;

    t = ((x * x) + n)/(2 * x);
    if(t == x)
        return (t);
    else
        sqroot(t,n);
}

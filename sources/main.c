/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/18 17:21:44 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int i;
	int geff;

	geff = 0;
	i = read_piece();
	while (!geff)
		geff = (compare(i));
}

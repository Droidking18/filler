/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/28 16:20:30 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	char **map;
//	char **token;
	int i = 0;
	int j = 0;
//	int fd = open(av[1], O_RDONLY);
    i = read_piece();
	map = read_map(i);
    while (map[j])
    {
        dprintf(2, "%s\n", map[j]);
        j++;
    }
//	token = read_token(fd);
//	free(token);
//	free(map);
    dprintf(2, "<<<<<<<<<<<%d>>>>>>>>>\n", i);
	ft_putnbr(8);
	ft_putchar(' ');
	ft_putnbr(2);
	ft_putchar('\n');
}

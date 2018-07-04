/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/04 17:13:35 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
//	char **map;
//	char **token;
	//int i = 0;
//	int j = 0;
//	int fd = open(av[1], O_RDONLY);
//	map = read_map(fd);
//	token = read_token(fd);
//	free(token);
//	free(map);
	read_piece();
	dprintf(2, "hello this is the main\n");
	compare();
}

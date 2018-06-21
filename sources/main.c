/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/21 15:46:54 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	char **map;
	char **token;
	int i = 0;
	int j = 0;
	int fd = open(av[1], O_RDONLY);
	map = read_map(fd);
	token = read_token(fd);
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	while (token[j])
	{
		printf("%s\n", token[j]);
		j++;
	}
	free(token);
	free(map);
}

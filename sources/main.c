/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:25:18 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/21 11:16:57 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/libft.h"
#include <stdio.h>

int		main(void)
{
	char **map;
	char **token;
	int i = 0;
	int j = 0;
	printf("___________________________________________________\n______________________________________________");
	map = read_map();
	//while (map[i])
	//	i++;
	//map[i] = 0;
	token = read_token();
	while (map[i])
	{
	printf("%s\n", map[i]);
	i++;
	}
	while (token[j])
	{
	printf("%s", token[j]);
	j++;
	}
	free(token);
	free(map);
	//printf("%s", token[4]);
}

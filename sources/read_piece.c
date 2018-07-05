/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:39:28 by dkaplan           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/04 17:13:38 by dkaplan          ###   ########.fr       */
=======
/*   Updated: 2018/06/28 15:26:31 by dkaplan          ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
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
	i = (ft_strcmp(str, "$$$ exec p1 : [./filler]") ? 0 : 1);
	free(str);
	dprintf(2, "%d\n", i);
	return(i);
}

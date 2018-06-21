/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:31:09 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/18 12:41:28 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_read_buffer(int const fd, char **line)
{
	char	*buff;
	int		ret;
	char	*tmp;

	if (!(buff = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = 0;
		if (!(tmp = ft_strjoin(*line, buff)))
			return (-1);
		free(*line);
		*line = tmp;
		free(buff);
	}
	if (ret == 0)
		free(buff);
	return (ret);
}

int					get_next_line(int const fd, char **line)
{
	static char		*str;
	char			*strn;
	int				ret;

	if ((!str && (!(str = (char*)malloc(sizeof(char) * BUFF_SIZE + 1))))
			|| fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	strn = ft_strchr(str, '\n');
	while (!strn)
	{
		ret = ft_read_buffer(fd, &str);
		if (ret == 0 && !ft_strlen(str))
			return (0);
		if (ret == 0)
			ft_strcat(str, "\n");
		if (ret < 0)
			return (-1);
		else
			strn = ft_strchr(str, '\n');
	}
	if (!(*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(strn))))
		return (-1);
	ft_strcpy(str, strn + 1);
	return (1);
}

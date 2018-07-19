# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 08:35:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/19 10:50:53 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SOURCES = sources/algorithm.c sources/main.c sources/read_map.c \
			sources/read_piece.c sources/read_token.c sources/utils.c
INCLUDES = includes/filler.h

$(NAME):
	gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SOURCES)

all: $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

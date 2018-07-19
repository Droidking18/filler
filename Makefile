# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 08:35:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/19 14:42:19 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
SOURCES = sources/algorithm.c sources/main.c sources/read_map.c \
			sources/read_piece.c sources/read_token.c sources/utils.c
INCLUDES = libft/libft.a

$(NAME):
	make -C libft
	gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

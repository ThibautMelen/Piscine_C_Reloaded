# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 20:26:34 by thmelen           #+#    #+#              #
#    Updated: 2018/04/04 21:02:08 by thmelen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS)

clean:
	rm -f ft_putchar.o ft_putstr.o

fclean: clean
	rm -f $(NAME)

re : fclean all

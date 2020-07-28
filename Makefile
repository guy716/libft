# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guy <guy@42.fr>                            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 00:19:01 by guy               #+#    #+#              #
#    Updated: 2020/07/29 01:46:09 by gil              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_C = ./
PATH_H = ./
CFLAGS = -Wall -Wextra -Werror


SOURCE = $(PATH_C)*.c
OBJECT = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c -I $(PATH_H) $(SOURCE)
	ar -rc $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

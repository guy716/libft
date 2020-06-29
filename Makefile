# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guy <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 00:19:01 by guy               #+#    #+#              #
#    Updated: 2018/09/19 10:51:23 by guy              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_C = src/
PATH_H = includes/
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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guy <guy@42.fr>                            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 00:19:01 by guy               #+#    #+#              #
#    Updated: 2020/07/29 02:33:33 by gil              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror


SOURCE = $(PATH_C)*.c
OBJECT = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SOURCE)
	ar -rc $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

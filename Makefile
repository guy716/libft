# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guy <guy@42.fr>                            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 00:19:01 by guy               #+#    #+#              #
#    Updated: 2020/08/03 18:39:46 by gil              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SOURCES  =  ft_atoi.c      \
        	ft_bzero.c      \
        	ft_calloc.c     \
        	ft_isalnum.c    \
        	ft_isalpha.c    \
        	ft_isascii.c    \
        	ft_isdigit.c    \
        	ft_isprint.c    \
        	ft_itoa.c       \
        	ft_memccpy.c    \
        	ft_memchr.c     \
        	ft_memcmp.c     \
        	ft_memcpy.c     \
        	ft_memmove.c    \
        	ft_memset.c     \
        	ft_putchar_fd.c \
        	ft_putendl_fd.c \
        	ft_putnbr_fd.c  \
        	ft_putstr_fd.c  \
        	ft_split.c      \
        	ft_strchr.c     \
        	ft_strdup.c     \
        	ft_strjoin.c    \
        	ft_strlcat.c    \
        	ft_strlcpy.c    \
        	ft_strlen.c     \
        	ft_strmapi.c    \
        	ft_strncmp.c    \
        	ft_strnstr.c    \
        	ft_strrchr.c    \
        	ft_strtrim.c    \
        	ft_substr.c     \
        	ft_tolower.c    \
        	ft_toupper.c
S_BONUS  =  ft_lstadd_back.c  \
            ft_lstadd_front.c \
            ft_lstlast.c      \
            ft_lstnew.c       \
            ft_lstsize.c      \
            ft_lstdelone.c    \
            ft_lstclear.c     \
            ft_lstiter.c      \
            ft_lstmap.c

OBJECTS	= $(SOURCES:%.c=%.o)
O_BONUS	= $(S_BONUS:%.c=%.o)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

bonus: $(OBJECTS) $(O_BONUS)
	ar -rc $(NAME) $(OBJECTS) $(O_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) $(O_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

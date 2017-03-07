# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esterna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/26 17:01:46 by esterna           #+#    #+#              #
#    Updated: 2017/03/06 15:14:19 by esterna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address
DEPS = libft.h
FUNCTIONS = *.c
OBJ = $(FUNCTIONS:.c=.o)

all: $(NAME)
$(NAME):
	gcc $(CFLAGS) -c $(FUNCTIONS) $(DEPS)
	ar rc $@.a $(OBJ)
	ranlib $@.a
main: $(NAME)
	gcc $(CFLAGS) -o $@ main.c -L. -lft
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME).a
	/bin/rm -f main
re: fclean all main

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 14:45:46 by tjoyeux           #+#    #+#              #
#    Updated: 2023/11/07 15:09:07 by tjoyeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $@ $^

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all 

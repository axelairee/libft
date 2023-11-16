# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abolea <abolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 16:48:52 by abolea            #+#    #+#              #
#    Updated: 2023/11/10 16:48:37 by abolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c 
	$(CC) -o $@ -c $< $(FLAGS)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all
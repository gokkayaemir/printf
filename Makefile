# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 12:17:24 by emgokkay          #+#    #+#              #
#    Updated: 2023/07/24 12:17:25 by emgokkay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_FILES = ft_printf.c      \
			ft_source.c
OBJ_FILES = $(SRC_FILES:.c=.o)
HEADER = ft_printf.h
RM = rm -rf
all:	$(NAME)
%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< 
$(NAME):	$(OBJ_FILES)
		ar crs $(NAME) $(OBJ_FILES)
clean:
	$(RM) $(OBJ_FILES)
fclean: clean
		$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re
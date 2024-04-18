# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmad <mmad@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 17:12:01 by mmad              #+#    #+#              #
#    Updated: 2024/04/18 17:34:52 by mmad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = pars_line_using_trees_help.c trees_fund.c 

OBJ = $(SRC:.c=.o)

NAME = Pars_value_linked_list
LIBFT = libft/libft.a
# FT_PRINTF = /nfs/homes/mmad/grep_printf/libftprintf.a

CC = gcc

# CFLAGS = -Wall -Wextra -Werror -g3
CFLAGS =  -g3  -no-pie

all : $(NAME)

$(NAME) : $(OBJ) $(LIBFT) $(FT_PRINTF)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
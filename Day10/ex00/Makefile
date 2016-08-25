# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clgirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/21 11:09:53 by clgirard          #+#    #+#              #
#    Updated: 2016/08/21 22:32:21 by clgirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = compil

LIB = libft.a

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

FPO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(LIB)

$(NAME):
	gcc -c $(SRCS) -I includes/

$(LIB): $(NAME)
	ar rc $(LIB) $(FPO)

clean:
	/bin/rm -f $(FPO)

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all

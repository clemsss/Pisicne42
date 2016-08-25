# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clgirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 09:31:23 by clgirard          #+#    #+#              #
#    Updated: 2016/08/24 11:19:44 by clgirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

EXEC = do-op.h.gch

HEADER = do-op.h

FPC = do-op.c ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c opperator.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(FPC) -I $(HEADER) -o $(NAME)

clean:
	@/bin/rm -f $(NAME) $(EXEC)

re: clean all

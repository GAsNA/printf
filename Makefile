# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:54:15 by rleseur           #+#    #+#              #
#    Updated: 2021/11/26 14:10:15 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =			display.c		\
				flags.c			\
				ft_atoi.c		\
				ft_printf.c		\
				ft_putaddr.c	\
				ft_putchar.c	\
				ft_puthexa.c	\
				ft_putnbr.c		\
				ft_putstr.c

OBJS =			${SRCS:.c=.o}

HEADER =		./headers/

NAME =			libftprintf.a

CFLAGS =		-Wall -Wextra -Werror

all:			${NAME}

${NAME}:		${OBJS}
				ar rc ${NAME} ${OBJS}

.c.o:
				clang -c ${CFLAGS} -I${HEADER} $^ -o $@

clean:
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re

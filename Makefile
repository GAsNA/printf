# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:54:15 by rleseur           #+#    #+#              #
#    Updated: 2021/12/03 09:15:16 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR =			srcs/

SRCS =			${DIR}display.c		\
				${DIR}ft_atoi.c		\
				${DIR}ft_printf.c	\
				${DIR}ft_putaddr.c	\
				${DIR}ft_putchar.c	\
				${DIR}ft_puthexa.c	\
				${DIR}ft_putnbr.c	\
				${DIR}ft_putstr.c

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

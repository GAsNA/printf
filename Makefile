# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:54:15 by rleseur           #+#    #+#              #
#    Updated: 2021/11/25 12:01:34 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =			

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

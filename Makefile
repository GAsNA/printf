# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:54:15 by rleseur           #+#    #+#              #
#    Updated: 2021/12/03 14:34:15 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Style de typo :
_FIN		=	\033[0m
_GRAS		=	\033[1m
_ITA		=	\033[3m
_SOUS		=	\033[4m
_CLIGN		=	\033[5m
_REV		=	\033[7m

# Couleurs des lettres :
_GRIS		=	\033[30m
_ROUGE		=	\033[31m
_VERT		=	\033[32m
_JAUNE		=	\033[33m
_BLEU		=	\033[34m
_VIOLET		=	\033[35m
_CYAN		=	\033[36m
_BLANC		=	\033[37m

# Couleurs de fonds :
_IGRIS		=	\033[40m
_IROUGE		=	\033[41m
_IVERT		=	\033[42m
_IJAUNE		=	\033[43m
_IBLEU		=	\033[44m
_IVIOLET	=	\033[45m
_ICYAN		=	\033[46m
_IBLANC		=	\033[47m

# Appel
_VALID		=	/bin/echo -e "${_VERT}${_IVIOLET}\#\# $1${_FIN}"
_EMOJI		=	/bin/echo -e "${_GRAS}${_VIOLET}$1${_FIN}\n"

CREATED_LIB	=	@$(call _VALID,"Library created!")
DELETED_OBJS=	@$(call _VALID,"Objs deleted!")
DELETED_LIB	=	@$(call _VALID,"Library deleted!")
TRANQUER	=	@$(call _EMOJI,"（ ^_^）o自自o（^_^ ）")
THROW_TABLE	=	@$(call _EMOJI, "（╯°□°）╯︵ ┻━┻" )
THROW_TABLE2=	@$(call _EMOJI, "┻━┻ ︵ヽ（\`━\'）ﾉ︵ ┻━┻")


####### MAKEFILE  #######
DIR			=	srcs/

SRCS		=	${DIR}display.c		\
				${DIR}ft_atoi.c		\
				${DIR}ft_printf.c	\
				${DIR}ft_putaddr.c	\
				${DIR}ft_putchar.c	\
				${DIR}ft_puthexa.c	\
				${DIR}ft_putnbr.c	\
				${DIR}ft_putstr.c

OBJS		=	${SRCS:.c=.o}

HEADER		=	./headers/

NAME		=	libftprintf.a

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

# Commandes
all:			${NAME}

${NAME}:		${OBJS}
				ar rc ${NAME} ${OBJS}
				${CREATED_LIB}
				${TRANQUER}

.c.o:
				${CC} -c ${CFLAGS} -I${HEADER} $^ -o $@

clean:
				${RM} ${OBJS}
				${DELETED_OBJS}
				${THROW_TABLE}

fclean:			clean
				${RM} ${NAME}
				${DELETED_LIB}
				${THROW_TABLE2}

re:				fclean all

.PHONY:			all clean fclean re

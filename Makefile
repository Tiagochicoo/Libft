# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:20:21 by tpereira          #+#    #+#              #
#    Updated: 2021/02/10 22:25:10 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC 		= gcc
FLAGS 	= -Wall -Werror -Wextra
SRCS 	= ${wildcard *.c}
OBJS 	= ${SRCS:.c=.o}
 
RM 		= rm -f

.c.o:
	${CC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re

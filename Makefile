# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@student.42Lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:20:21 by tpereira          #+#    #+#              #
#    Updated: 2021/02/13 21:33:48 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC 		= gcc
FLAGS 	= -Wall -Werror -Wextra
SRCS 	= ${wildcard *.c}
OBJS 	= ${SRCS:.c=.o}
CFLAGS  :=  -ansi -pedantic -Wall -W -Werror -g3 -fPIC
RM 		= rm -f

.c.o:
	${CC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

so:
	${CC} -fPIC ${CFLAGS} -c ${OBJS:.o=.c} ${OBJS_BONUS:.o=.c}
	gcc -shared -o libft.so ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re

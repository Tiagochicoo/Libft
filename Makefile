# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:20:21 by tpereira          #+#    #+#              #
#    Updated: 2021/03/06 12:54:39 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_putchar_fd.c           \
        ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_atoi.c ./ft_tolower.c ./ft_toupper.c ./ft_isprint.c    \
        ./ft_isascii.c ./ft_isalnum.c ./ft_isdigit.c ./ft_isalpha.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strchr.c         \
        ./ft_strrchr.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strdup.c ./ft_memset.c ./ft_bzero.c             \
        ./ft_memcpy.c ./ft_memccpy.c ./ft_memmove.c ./ft_memchr.c ./ft_memcmp.c ./ft_calloc.c
OBJS =  $(SRCS:.c=.o)
BSRCS = ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c ./ft_lstdelone.c             \
        ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c
BOBJS = $(BSRCS:.c=.o)
NAME =  libft.a
SO =    libft.so
all:        $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BOBJS)
soclean:    clean
	rm -f $(SO)
fclean:     clean
	rm -f $(NAME)
	rm -f $(SO)
re:         fclean all
bonus:
	gcc -Wall -Wextra -Werror -c $(BSRCS)
	ar -rcs $(NAME) $(BOBJS)
so:         $(OBJS) $(BOBJS)
	gcc -shared -o $(SO) $(OBJS) $(BOBJS)
	
.PHONY: so bonus re fclean soclean clean all

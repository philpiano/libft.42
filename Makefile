# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwarda <pwarda@student.42warsaw.pl>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/13 15:59:03 by pwarda            #+#    #+#              #
#    Updated: 2026/07/14 16:11:51 by pwarda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRCS	=	ft_atoi.c \
		ft_lstadd_back.c \
		ft_memchr.c \
		ft_split.c \
		ft_strncmp.c \
		ft_bzero.c \
		ft_lstadd_front.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_lstclear.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_strrchr.c \
		ft_isalnum.c \
		ft_lstdelone.c \
		ft_memmove.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_lstiter.c \
		ft_memset.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_isascii.c \
		ft_lstlast.c \
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_lstmap.c \
		ft_putendl_fd.c \
		ft_strlcpy.c \
		ft_toupper.c \
		ft_isprint.c \
		ft_lstnew.c \
		ft_putnbr_fd.c \
		ft_strlen.c \
		ft_itoa.c \
		ft_lstsize.c \
		ft_putstr_fd.c \
		ft_strmapi.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re

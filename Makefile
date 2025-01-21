# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 13:52:09 by dortega-          #+#    #+#              #
#    Updated: 2025/01/21 14:55:13 by dortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

NAME = libft.a
SRCS = ft_isalpha.c\
       ft_isdigit.c\
	   ft_isalnum.c\
       ft_isascii.c\
	   ft_isprint.c\
	   ft_strlen.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
       ft_strrchr.c\
       ft_strncmp.c\
       ft_memchr.c\
       ft_memcmp.c\
       ft_strnstr.c\
       ft_calloc.c\
       ft_strdup.c\
	   ft_atoi.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_itoa.c\
	   ft_split.c\




INC = libft.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h Makefile
		$(CC) $(FLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re

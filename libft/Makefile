# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srossatt <srossatt@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 13:25:35 by srossatt          #+#    #+#              #
#    Updated: 2023/01/16 17:29:02 by srossatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -f
SRC = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_putchar_fd.c \
ft_putstr_fd.c \

OBJS := $(SRC:.c=.o)

all: $(NAME)
$(NAME): %.o
	@ar rcs $(NAME) $(OBJS)
%.o:
	@$(CC) $(CFLAGS) -c $(SRC)
clean:
	@$(CLEAN) $(OBJS)
fclean: clean
	@$(CLEAN) $(NAME)
re: fclean all
.PHONY: all clean fclean re
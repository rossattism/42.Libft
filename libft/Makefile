NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -Rf
SRC = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c
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
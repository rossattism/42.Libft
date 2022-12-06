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
ft_toupper.c \
ft_tolower.c \
ft_strncmp.c \
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
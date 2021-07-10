NAME = libft.a
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror
CC = clang
AR = ar rc
RM = rm -f

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_strlcpy.c ft_tolower.c ft_tolower.c #ft_strlcat.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) main.c -c $(SRCS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
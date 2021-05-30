.PHONY: all clean run #fclean re
# NAME	= libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

all: clean run

output: main.o ft_strlen.o
	${CC} ${CFLAGS} main.o ft_strlen.o -o output.o

main.o: main.c
	${CC} ${CFLAGS} -c main.c

ft_strlen.o: ft_strlen.c libft.h
	${CC} ${CFLAGS} -c ft_strlen.c

clean:
	rm *.o

run:
	@./output.o
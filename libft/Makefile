# .PHONY: all clean fclean re
# NAME	= libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
# all:

output: main.o ft_strlen.o
	${CC} ${CFLAGS} main.o ft_strlen.o -o output.out

main.o: main.c
	${CC} ${CFLAGS} -c main.c

ft_strlen.o: ft_strlen.c libft.h
	${CC} ${CFLAGS} -c ft_strlen.c

clean:
	rm *.o output
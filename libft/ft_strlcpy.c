#include "libft.h"
#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	/*
		Basically copies l char from *src to *dst
		If dstsize is > 0 cool

		Always returns the total length of the string they tried to create (src)
	*/

	int offset;

	offset = 0;
	if (dstsize > 0)
	{ // do what you have to do

	}

	// contar a qtd de caracteres de src representado por offset

	return (offset);
}
// clang ft_strlcpy.c -o teste && ./teste
int main(void)
{
	const char source[] = "Ola mundo";
	char dest[] = "";

	printf("%lu\n", strlcpy(dest, source, -2));

	printf("%s\n", dest);

	return (0);
}
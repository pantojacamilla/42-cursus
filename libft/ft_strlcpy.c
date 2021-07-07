#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int amount_chars_src;
	int current_position;
	char *start;

	current_position = 0;
	amount_chars_src = 0;
		*start = *src;
	if (dstsize > 0)
	{
		while (*src != '\0' && current_position < (dstsize - 1))
		{
			*dst = *src;
			dst++;
			src++;
			current_position++;
		}

		*dst = '\0';
	}

	while (*start != '\0')
	{
		start++;
		amount_chars_src++;
	}
	printf("\n");

	return (amount_chars_src);
}
// clang ft_strlcpy.c -o teste && ./teste
int main(void)
{
	const char sourceOG[] = "AEIO U";
	char destOG[] = "";

	const char sourceMine[] = "AEIO U";
	char destMine[] = "";


	printf("OG OUTPUT: %lu\n", strlcpy(destOG, sourceOG, -1)); // para dstsize == 2 é passado para destino O e /null
	printf("OG DESTINATION: %s\n", destOG);

	printf("\n\n");

	printf("MINEs OUTPUT: %lu\n", ft_strlcpy(destMine, sourceMine, -1)); // para dstsize == 2 é passado para destino O e \0
	printf("MINEs DESTINATION: %s\n", destMine);

	return (0);
}
#include "libft.h"
#include <stdio.h> // remover

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		amount_chars_src;
	int		current_position;
	char	*start;

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
	return (amount_chars_src);
}

int main (void)
{
	char const *OG_src = "OU";
	char *OG_dest[100];
	*OG_dest = "AEI";

	printf("\n%lu\n", strlcat(*OG_dest, OG_src, 0));
	printf("\n%s\n", *OG_dest);

	return (0);
}
// clang ft_strlcat.c -o teste && ./teste
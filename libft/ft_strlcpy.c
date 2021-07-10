#include "libft.h"
#include <strings.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	amount_chars_src;
	size_t	current_position;

	current_position = 0;
	amount_chars_src = 0;
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

	// FIX THIS ASAP
	while (*src != '\0')
	{
		src++;
		amount_chars_src++;
	}
	return (amount_chars_src);
}

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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

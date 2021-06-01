#include "libft.h"

/*
** ('a' - 'A') == 32
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

#include "libft.h"

int	ft_isascii(int c)
{
	int	l;

	l = 1;
	if (!(c >= 0 && c <= 127))
		l = 0;
	return (l);
}

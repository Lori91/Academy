#include "libft.h"

int	ft_isprint(int c)
{
	int	l;

	l = 1;
	if (!(c >= 32 && c < 127))
		l = 0;
	return (l);
}

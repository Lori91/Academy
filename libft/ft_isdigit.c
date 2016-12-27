#include "libft.h"

int	ft_isdigit(int c)
{
	int	l;

	l = 1;
	if (!(c >= '0' && c <= '9'))
		l = 0;
	return (l);
}

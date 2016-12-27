#include "libft.h"

int	ft_isalpha(int c)
{
	int	l;

	l = 1;
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		l = 0;
	return (l);
}

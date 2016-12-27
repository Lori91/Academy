#include "libft.h"

int	ft_isalnum(int c)
{
	int	l;

	l = 1;
	if (!((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)))
		l = 0;
	return (l);
}

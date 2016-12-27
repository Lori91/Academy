#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p1;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)s;
	while (i < n)
	{
		p1[i] = 0;
		i++;
	}
}

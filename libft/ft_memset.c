#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *)b;
	while (len > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

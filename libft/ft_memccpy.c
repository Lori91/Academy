#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	while (i < n)
	{
		p1[i] = p2[i];
		if (p2[i] == c)
			return (p1 + i + 1);
		i++;
	}
	return (NULL);
}

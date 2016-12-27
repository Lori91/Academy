#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t;
	size_t			i;

	i = 0;
	if (!(t = (unsigned char *)malloc(sizeof(*t) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		*(t + i) = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(t + i);
		i++;
	}
	return (dst);
}

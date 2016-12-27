#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!size)
		return (NULL);
	if (!(str = (void*)malloc(sizeof(*str) * (size))))
		return (NULL);
	str = ft_memset(str, 0, size);
	return (str);
}

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	k = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	if (size < k)
		return (size + ft_strlen(src));
	if (size == k)
		return (k + ft_strlen(src));
	else
	{
		while (j < size - k - 1 && src[j])
		{
			dest[j + i] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (k + ft_strlen(src));
	}
}
/*
int	main(void)
{
	char	test[5] = "abc";

	printf("%zu\n", ft_strlcat(test, "mdf7fo", 38));
	printf("%c\n", *test);
	return (0);
}*/

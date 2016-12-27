#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = i;
		k = 0;
		while ((k + j) <= len && big[j] == little[k])
		{
			if (!little[k + 1])
				return ((char *)big + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}

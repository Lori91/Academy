#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[i])
	{
		j = i;
		k = 0;
		while (big[j] == little[k])
		{
			if (!little[k + 1])
				return ((char*)&big[i]);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}

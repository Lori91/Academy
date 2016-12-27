#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	l = 0;
	while (src[i])
		i++;
	if (!src)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (i + 1));
	while (l < i)
	{
		str[l] = src[l];
		l++;
	}
	str[l] = '\0';
	return (str);
}

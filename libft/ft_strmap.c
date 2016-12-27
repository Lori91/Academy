#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	while (s[j])
	{
		str[j] = f(s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}

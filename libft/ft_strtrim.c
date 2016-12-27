#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		w;

	if (s)
	{
		w = 0;
		i = 0;
		len = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!(str = (char *)malloc(sizeof(*str) * (len - i + 1))))
			return (NULL);
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			len--;
		len++;
		while (i < len)
			str[w++] = s[i++];
		str[w] = '\0';
		return (str);
	}
	return (NULL);
}

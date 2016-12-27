#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*t;

	t = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			t = s + i;
		i++;
	}
	if (c == 0)
		return ((char*)(s + i));
	return ((char*)t);
}

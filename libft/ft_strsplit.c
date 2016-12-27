#include "libft.h"

static int	ft_numar_cuvinte(char const *s, char c)
{
	int	i;
	int	cuvant;
	int	ok;

	ok = 0;
	cuvant = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && ok == 1)
			ok = 0;
		if (s[i + 1] != c && s[i + 1] != '\0' && ok == 0)
		{
			ok = 1;
			cuvant++;
		}
		i++;
	}
	return (cuvant);
}

static int	ft_lungimea_cuvantului(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;
	int		cuvinte;

	cuvinte = ft_numar_cuvinte(s, c);
	if (!(str = (char**)malloc(sizeof(*str) * (cuvinte + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (cuvinte > 0)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		str[j] = ft_strsub(s, i, ft_lungimea_cuvantului(s, c, i));
		j++;
		i = i + ft_lungimea_cuvantului(s, c, i);
		cuvinte--;
	}
	str[j] = 0;
	return (str);
}

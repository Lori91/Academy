#include "libft.h"

static long		ft_marime_nr(long num)
{
	long	marime;

	marime = 0;
	if (num < 0)
	{
		num = -num;
		marime = 1;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		marime++;
		num = num / 10;
	}
	return (marime);
}

static char		*ft_is_zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char		*ft_reverse_pozitiv(char *str, char *ptr, int i)
{
	unsigned int j;

	j = 0;
	while (j < ft_strlen(str))
	{
		ptr[j] = str[i];
		i--;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

static char		*ft_reverse(char *str, char semn)
{
	size_t	j;
	int		i;
	char	*ptr;

	ptr = (char *)malloc(sizeof(ptr) * (ft_strlen(str) + 1));
	i = 0;
	while (str[i] != '\0')
		i++;
	j = 1;
	i--;
	if (semn == '-')
	{
		ptr[0] = semn;
		while (j <= ft_strlen(str))
		{
			ptr[j] = str[i];
			j++;
			i--;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	else
		return (ft_reverse_pozitiv(str, ptr, i));
}

char			*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	num;
	char	semn;

	semn = '+';
	i = 0;
	num = n;
	if (!(str = (char*)malloc(sizeof(*str) * (ft_marime_nr(n) + 1))))
		return (NULL);
	while (num < 0)
	{
		num = -num;
		semn = '-';
	}
	if (num == 0)
		return (ft_is_zero(str));
	while (num > 0)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	str[i] = '\0';
	return (ft_reverse(str, semn));
}

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	rez;

	i = 0;
	neg = 1;
	rez = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rez = rez * 10 + str[i] - '0';
		i++;
	}
	return (rez * neg);
}

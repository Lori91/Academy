#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	i = n;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}


void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (*s)
	{
		while (s[i])
		{
			f(&*(char *)(s + i));
			i++;
		}
	}
}


char	*ft_strncat(char *dest, const char *src, int n)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

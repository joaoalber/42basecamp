char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (*src && index < n)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	while (index < n)
	{
		*dest = '\0';
		dest++;
		index++;
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index])
		index++;
	while (*src)
	{
		dest[index++] = *src;
		src++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*_dest;

	_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (_dest);
}

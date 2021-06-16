int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_len;
	unsigned int	bytes_written;

	index = 0;
	bytes_written = 0;
	dest_len = ft_strlen(dest);
	if (size != 0)
	{
		while (dest[index])
			index++;
		while ((*src) && (bytes_written < (size - dest_len - 1)))
		{
			dest[index++] = *src;
			src++;
			bytes_written++;
		}
		dest[index] = '\0';
	}
	return (ft_strlen(dest));
}

int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
		position++;
	return (position);
}

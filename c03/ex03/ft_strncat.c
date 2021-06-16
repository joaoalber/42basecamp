char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index;
	unsigned int	written_bytes;

	index = 0;
	written_bytes = 0;
	while (dest[index])
		index++;
	while ((*src) && (written_bytes < nb))
	{
		dest[index++] = *src;
		src++;
		written_bytes++;
	}
	dest[index] = '\0';
	return (dest);
}

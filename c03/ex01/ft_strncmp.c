int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	compared_byte;

	compared_byte = 1;
	if (n == 0)
		return (0);
	while (*s1 && *s2)
	{
		if ((*s1 != *s2) || (compared_byte++ == n))
			break ;
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	byte;

	byte = 1;
	while (*s1 && *s2)
	{
		if ((*s1 != *s2) || (byte++ == n))
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

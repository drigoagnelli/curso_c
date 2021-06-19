int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	if (n == 0)
		return (0);
	pos = 0;
	while (s2[pos] != '\0' && s1[pos] != '\0' && pos < (n - 1))
	{
		if (s1[pos] != s2[pos])
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		pos++;
	}
	return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
}

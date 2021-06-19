int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while ((s1[pos] == s2[pos]) && (s1[pos] != '\0') && (s2[pos] != '\0'))
		pos++;
	return ((unsigned char )s1[pos] - (unsigned char )s2[pos]);
}

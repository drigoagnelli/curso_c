char	*ft_strcat(char	*dest, char	*src)
{
	int	lenght;
	int	index;

	lenght = 0;
	index = 0;
	while (dest[lenght] != '\0')
		lenght++;
	while (src[index] != '\0')
	{
		dest[lenght] = src[index];
		lenght++;
		index++;
	}
	dest[lenght] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lenght;
	unsigned int	index;

	lenght = 0;
	index = 0;
	while (dest[lenght] != '\0')
		lenght++;
	while (src[index] != '\0' && index < nb)
	{
		dest[lenght] = src[index];
		lenght++;
		index++;
	}
	dest[lenght] = '\0';
	return (dest);
}

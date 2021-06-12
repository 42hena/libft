size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	strlcpy(char * dst, char * src, size_t dstsize)
{
	size_t	i;
	size_t	temp;

	if (dst || src)
		return (0);
	while (i < temp && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (temp);
}

size_t ft_strlen(const char *s)
{
	size_t	i;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	temp;

	i = 0;
	while (dst[i])
		i++;
	temp = i;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	temp = i;
	
	return (temp);
}

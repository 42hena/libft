char*	ft_strchr(const char *s, int c)
{
	int	i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i])
		i++;
	while (i>=0)
	{
		if(s[i] == c)
			return &s[i];
		i--;
	}
	return 0;
}


int		ft_strlen(char *s)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		s++;
		cnt++;
	}
	return (cnt);
}

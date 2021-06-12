int	atoi(const char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while(str[i])
	{
		if (str[i]>='0' && str[i]<='9')
			sum += str[i] - '0';
		else
			return (0);
		sum *= 10;
	}
	return (sum);
}

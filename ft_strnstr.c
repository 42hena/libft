char * ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		if(haystact[i] == neddle[j])
		{
			while (neddle[j])
				if(haystack[i] != neddle[j])
					break;
			j = 0;
		}
		i++;
	}
}

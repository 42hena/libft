size_t ft_strlen(char *s)
{
	size_t i;
	i = 0;
	while(s[i])
		i++;
	return (i);
}

char * strdup(const char *s1)
{
	size_t cnt;
	char *p;
	cnt = ft_strlen(s1);
	p = (char *)ft_calloc(sizeof(char)*cnt+1);
	for(i=0 ; i<cnt ; i++){
		p[i] = s[i];
	}
}

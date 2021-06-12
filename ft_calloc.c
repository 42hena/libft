void * calloc(size_t count, size_t size)
{
	void * p;
	size_t i;
	p = (void *)malloc(sizeof(void*) * size);
	for (i=0 ; i<size ; i++){
		p[i] = 0;
	}
	return p;
}

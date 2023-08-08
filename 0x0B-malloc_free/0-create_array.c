char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char  *ptr;
    
	ptr= (char*)malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	}

	return (ptr);
}

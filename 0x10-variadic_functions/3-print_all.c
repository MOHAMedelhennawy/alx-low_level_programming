void print_all(const char * const format, ...)
{
	f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	int i, j;
	va_list args;
	char *separator = "";
	va_start(args, format);

	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (f[j] != NULL)
		{
			if (f[j].form == format[i])
				f[j].fun(separator, args);
			separator = ", ";
			j++;
		}
		i++;
	}
	va_end;
	printf("\n");
}

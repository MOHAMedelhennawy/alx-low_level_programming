#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ptr;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char);
		if (ptr == NULL)
			ptrintf("(nil)\n");
		for (j = 0; ptr[j] != '\0'; j++)
			printf("%c", ptr[j]);
		if (i != n - 1 && separator != NULL)
			printf("%s",separator);
	}
	va_end(args);
}

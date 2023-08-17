#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function to print string
 * @separator: point to string
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j, i;
	char *ptr;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			for (j = 0; ptr[j] != '\0'; j++)
				printf("%c", ptr[j]);
		}
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

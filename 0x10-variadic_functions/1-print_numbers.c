#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - to print numbers
 * @separator: point to char
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}

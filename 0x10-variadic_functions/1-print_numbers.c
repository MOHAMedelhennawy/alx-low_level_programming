#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);
		if (i != n - 1)
			printf("%s",separator);
	}
	putchar('\n');
	va_end(args);
}

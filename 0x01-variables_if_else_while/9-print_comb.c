#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
		printf(", ");
	}
	putchar('\n');
	return (0);
}

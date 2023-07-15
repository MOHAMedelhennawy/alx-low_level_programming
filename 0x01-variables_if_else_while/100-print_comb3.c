#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 90; i++)
	{
		if (i < 10)
		{
			printf("0%d", i);
		}
		else
		{
			if (i  == (i % 10) * 10 + (i % 10) || i % 10 == 0)
				continue;
			else
				printf("%d", i);
		}
		if (i < 89)
			printf(", ");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int sum;
	char c;

	srand(time(NULL));

	while (sum <= 2650)
	{
		c = rand() % 128;
		sum += c;
		_putchar(c);
	}
	_putchar(2772 - sum);
	return (0);
}

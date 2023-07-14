#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is and is greater than 5", n);
	else if (n % 10 == 0)
		printf("Last digit of %d is and is 0", n);
	else
		printf("Last digit of %d is and is less than 6 and not 0", n);
	return (0);
}

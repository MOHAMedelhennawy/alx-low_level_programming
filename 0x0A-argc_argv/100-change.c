#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	int sum = atoi(argv[1]);
	int count = 0;

	while (sum > 0)
	{
		if (sum >= 25)
			sum -= 25;

		else if (sum >= 10 && sum < 25)
			sum -= 10;

		else if (sum >= 5 && sum < 10)
			sum -= 5;

		else if (sum >= 2 && sum < 5)
			sum -= 2;
		else
			sum -= 1;

		count++;
	}

	printf("%d\n",count);
	return (0);
}

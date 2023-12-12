#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char op = argv[2];
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]), result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(num1, num2);
	printf("%d\n", result);

	return (0);

}

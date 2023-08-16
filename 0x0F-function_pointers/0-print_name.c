#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - func to print name
 * @name: data to store the name
 * @f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

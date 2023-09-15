#include "main.h"
void print_listint(const path *h)
{
	size_t size = 0;
	const path *ptr = h;

	if (!ptr)
	{
		return;
	}

	while (ptr)
	{
		printf("%s\n", ptr->str);
		ptr = ptr->next;
	}

	return;
}

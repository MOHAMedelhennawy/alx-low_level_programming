#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	
	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	fw = write(fd, text_content, i);
	if (fw == -1)
		return (-1);
	return (1);
}

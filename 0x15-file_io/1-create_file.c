#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int i, wf, file_desc;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_CREAT);
	if (file_desc == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	wf = write(file_desc, text_content, i);
	if (wf == -1)
		return (-1);
	close(file_desc);
	return (1);
}

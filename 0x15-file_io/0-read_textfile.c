#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  file_descriptor, bytes;
	char *ch;

	if (!filename)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	bytes= read(file_descriptor, ch, letters);
        write(STDOUT_FILENO, ch, bytes);
	
	close(file_descriptor);
	free(ch);
	return (bytes);
}

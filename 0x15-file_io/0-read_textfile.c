#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
* read_textfile - that reads a text file and prints
* @filename: const char
* @letters: size_t
* Return: i
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytes = 0, i = 0;

	char *string;

	if (filename == NULL)
	return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);
	string = malloc(letters);
	if (string == NULL)
	return (0);
	bytes = read(file, string, letters);
	i = write(STDOUT_FILENO, string, bytes);
	if (bytes != i)
	return (0);
	close(file);
	free(string);
	return (i);
}

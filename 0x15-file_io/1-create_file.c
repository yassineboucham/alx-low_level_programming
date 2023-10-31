#include "main.h"
/**
 * sstrlen - len of a string
 * @string: string
 * Return: lent
*/
int sstrlen(char *string)
{
	int i = 0;

	while (*string++)
	i++;
	return (i);
}
/**
 * create_file -  a function that appends text at the end of a file.
 * @filename: const char*
 * @text_content: char*
 * Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int file, bite;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
	text_content = "";
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	return (-1);
	bite = write(file, text_content, sstrlen(text_content));
	if (bite == -1)
	return (-1);
	close(file);
	return (1);
}

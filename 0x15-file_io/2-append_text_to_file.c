#include "main.h"
#include "strlen.c"
/**
* append_text_to_file -  function that appends text at the end of a file.
* @filename: const char
* @text_content: char
* Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int byte, file;

	if (!text_content)
	text_content = "";
	if (!filename)
	return (-1);
	file = open(filename, O_APPEND | O_WRONLY);

	if (!file)
	return (-1);
	byte = write(file, text_content, sstrlen(text_content));
	if (byte == -1)
	return (-1);
	close(file);
	return (1);
}

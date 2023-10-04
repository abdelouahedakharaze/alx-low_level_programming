#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int destination, thool, write_bytes;
	
	if (filename == NULL)
		return (-1);
	destination = open(filename, O_WRONLY | O_APPEND);
	if (destination == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(destination);
		return (1);
	}
	for (thool = 0; text_content[thool]; thool++)
		;
	write_bytes = write(destination, text_content, thool);
	if (write_bytes == -1)
	{
		close(destination);
		return (-1);
	}
	close(destination);
	return (1);
}

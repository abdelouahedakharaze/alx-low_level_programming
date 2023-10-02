#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads file and prints it to POSIX stdout
 * @filename: file pointer
 * @letters: The number of letters to print
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t door, eyes, hand;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	door = open(filename, O_RDONLY);
	eyes = read(door, buffer, letters);
	hand = write(STDOUT_FILENO, buffer, eyes);

	if (door == -1 || eyes == -1 || hand == -1 || hand != eyes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(door);

	return (hand);
}

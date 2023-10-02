#include "main.h"

/**
 * main - copy file to file.
 * @argc: Nb arguments
 * @argv: arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int origins, arrival, eyess, hands;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open file_from */
	origins = open(argv[1], O_RDONLY);
	if (origins == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to */
	arrival = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (arrival == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* read from file_from and write to file_to */
	while ((eyess = read(origins, buf, 1024)) > 0)
	{
		hands = write(arrival, buf, eyess);
		if (hands == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (eyess == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(origins) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origins), exit(100);

	if (close(arrival) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arrival), exit(100);

	return (0);
}

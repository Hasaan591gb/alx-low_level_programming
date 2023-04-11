#include "main.h"

#define BUFFER_SIZE 1024

void copy_file(int file_from, int file_to, char *argv1, char *argv2);

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, or one of the error codes on failure
 */
int main(argc, **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILE_NO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(file_from, file_to, argv[1], argv[2]);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}

/**
 * copy_file - Copies the content of a source file to a destination file
 * @file_from: The file descriptor of the source file
 * @file_to: The file descriptor of the destination file
 * @argv1: argv[1]
 * @argv2: argv[2]
 */
void copy_file(int file_from, int file_to, char *argv1, char *argv2)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv2);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILE_NO, "Error: Can't read from file %s\n", argv1);
		close(file_from);
		close(file_to);
		exit(98);
	}
}

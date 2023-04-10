#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_check - Checks for errors and exits the program if necessary
 * @bytes_read: Number of bytes read
 * @file_from: First file descriptor to check
 * @file_to: Second file descriptor to check
 *
 * Description: Checks if an error occurred while reading from a file,
 *              or while closing either of the two file descriptors.
 *              If an error occurred, prints an error message to the
 *              standard error and exits the program with the appropriate
 *              error code.
 */
void error_check(ssize_t bytes_read, int file_from, int file_to)
{
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILE_NO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}

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
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Description: Copies the content of a file to another file
 *
 * Return: 0 on success, or one of the following error codes:
 *         97 - Incorrect number of arguments
 *         98 - Can't read from file_from
 *         99 - Can't write to file_to
 *         100 - Can't close a file descriptor
 */
int main(argc, **argv)
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

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

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, BUFFER_SIZE);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	check1 = close(file_from);
	check2 = close(file_to);
	error_check(bytes_read, check1, check2);
	return (0);
}

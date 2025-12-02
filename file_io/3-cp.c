#include "main.h"
#include <errno.h>

/**
 * error_exit - prints an error message to standard error and exits
 * @code: exit code
 * @message: message to print
 * @file: file name or descriptor
 */
void error_exit(int code, const char *message, const char *file)
{
	if (code == 100) /* fd value */
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	else
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			error_exit(99, "Error: Can't write to", argv[2]);
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, NULL, "fd_from");

	if (close(fd_to) == -1)
		error_exit(100, NULL, "fd_to");

	return (0);
}


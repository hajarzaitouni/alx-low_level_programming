#include "main.h"

#define BUFF_SIZE 1024

char *createBuffer(char *filename);
void close_fd(int fd);

/**
 * close_fd - close the file descriptor
 *
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int file_desc;

	file_desc = close(fd);

	if (file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: copies the content of a file to another file
 *
 * @argc: the number of arguments
 * @argv: a pointer to array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char *buffer = createBuffer(argv[2]);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	r_bytes = read(fd_from, buffer, BUFF_SIZE);
	do {

		if (fd_from == -1 || r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w_bytes = write(fd_to, buffer, r_bytes);
		if (fd_to == -1 || w_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r_bytes = read(fd_from, buffer, BUFF_SIZE);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_bytes > 0);

	free(buffer);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}

/**
 * createBuffer - create buffer
 *
 * @filename: a pointer to string
 * Return: a pointer to the buffer
 */

char *createBuffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * BUFF_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

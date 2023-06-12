#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: a pointer to string (first parameter)
 * @text_content: a pointer to string (second parameter)
 * Return: 1 (Success) and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;
	int bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
	}

	bytes = write(fd, text_content, count);

	if (bytes == -1)
		return (-1);

	return (1);
}

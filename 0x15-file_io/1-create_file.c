#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, leng);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}




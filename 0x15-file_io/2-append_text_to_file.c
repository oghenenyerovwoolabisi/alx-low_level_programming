#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Pointer to filename.
 * @text_content: The string to append to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

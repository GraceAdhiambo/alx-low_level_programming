#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 on success. -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopen, w, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fopen = open(filename, O_WRONLY | O_APPEND);
	w = write(fopen, text_content, length);
	if (fopen == -1 || w == -1)
		return (-1);
	close(fopen);
	return (1);
}

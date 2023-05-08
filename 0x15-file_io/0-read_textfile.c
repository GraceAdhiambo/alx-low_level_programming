#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: file to bei read
 * @letters: no.of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pointer;
	ssize_t file_des;
	ssize_t w;
	ssize_t r;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	pointer = malloc(sizeof(char) * letters);
	r = read(file_des, pointer, letters);
	w = write(STDOUT_FILENO, pointer, r);
	free(pointer);
	close(file_des);
	return (w);
}

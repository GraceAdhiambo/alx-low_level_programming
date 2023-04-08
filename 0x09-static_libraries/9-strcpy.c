#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string including the terminating null byte
 * @dest: destination parameter of string
 * @src: source of string
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

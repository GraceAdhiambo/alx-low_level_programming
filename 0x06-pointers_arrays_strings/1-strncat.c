#include "main.h"
/**
  * *_strncat - concatanates a number of characters to a string
  * @dest: string destination
  * @src: string source
  * @n: number of characters to be appended
  * Return: returns destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int srclen = 0;
	int destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i  < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

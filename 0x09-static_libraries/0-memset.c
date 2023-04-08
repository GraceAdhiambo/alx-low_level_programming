#include "main.h"
/**
  * _memset - fills memory with constant byte
  * @s: memory address
  * @b: character to be filled
  * @n: number of bytes
  * Return: returns s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

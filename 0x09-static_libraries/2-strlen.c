#include "main.h"
/**
  * _strlen - prints the length of a string
  * @s: string to be checked
  * Return: returns the length
  */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

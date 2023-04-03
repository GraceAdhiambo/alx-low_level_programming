#include "main.h"
#include <stddef.h>
/**
  * *_strchr - locates a character in a string
  * @s: string
  * @c: character being located
  * Return: s if character is found
  * NULL if character is not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

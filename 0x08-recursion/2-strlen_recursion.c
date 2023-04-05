#include "main.h"
/**
  * _strlen_recursion - returns string length
  * @s: string
  * Return: string length
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}

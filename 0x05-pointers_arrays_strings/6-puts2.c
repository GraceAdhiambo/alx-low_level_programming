#include "main.h"
#include <string.h>
/**
  * puts2 - prints every other character of string
  * @str: string
  * Return: 0
  */
void puts2(char *str)
{
	int i;
	int n = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

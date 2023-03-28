#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

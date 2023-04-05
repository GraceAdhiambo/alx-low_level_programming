#include "main.h"
/**
  * _puts_recursion - prints a string
  * @s: string to be printed
  * Return: string
  */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

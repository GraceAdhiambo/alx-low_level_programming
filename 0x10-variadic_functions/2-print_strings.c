#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - prints strings followed by new line
  * @separator: string between strings
  * @n: no. of strings passed
  * Return: string
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all - prints anything
  * @format: all tyoes of arguments
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0;
	char c, *s;
	float f;
	va_list ans;

	va_start(ans, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				count++;
				c = (char) va_arg(ans, int);
				printf("%c", c);
				break;

			case 'i':
				count++;
				i = va_arg(ans, int);
				printf("%d", i);
				break;

			case 'f':
				count++;
				f = (float) va_arg(ans, double);
				printf("%f", f);
				break;

			case 's':
				count++;
				s = va_arg(ans, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;

			default:
				break;
		}
		i++;
	}
	va_end(ans);
	printf("\n");
}

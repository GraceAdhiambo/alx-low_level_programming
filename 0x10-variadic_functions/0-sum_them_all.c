#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - sum of all parameters
  * @n: fixed argument
  * Return: 0if n is 0 and sum otherwise
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list p;

	va_start(p, n);
		for (i = 0; i < n; i++)
		{
		sum += va_arg(p, int);
		}
	va_end(p);
	return (sum);
}

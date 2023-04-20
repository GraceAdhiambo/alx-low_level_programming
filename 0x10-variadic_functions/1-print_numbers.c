#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints numbers followed by new line
  * @separator: string between nums
  * @n: no. of integers passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
  * print_times_table - prints multiples of n
  * @n: variable
  * Return: always 0
  */
void print_times_table(int n)
{
	int i, j;
	int p;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (n <= 15 && n >= 0)
				printf("  %d,", p);
		}
		printf("\n");
	}
}

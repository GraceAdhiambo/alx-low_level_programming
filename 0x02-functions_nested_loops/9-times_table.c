#include "main.h"
#include <stdio.h>
/**
  * times_table - prints multiplication table
  * Return: returns 0
  */
void times_table(void)
{
	int i, j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			printf("%d", p);
			if (j != 9)
				printf(", ");
		}
		printf("\n");
	}
}

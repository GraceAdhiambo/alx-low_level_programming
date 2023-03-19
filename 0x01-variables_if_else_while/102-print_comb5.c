#include <stdio.h>
/**
  * main - this is the main function
  * Return: always 0
  */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					putchar(c + '0');
					putchar(d + '0');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

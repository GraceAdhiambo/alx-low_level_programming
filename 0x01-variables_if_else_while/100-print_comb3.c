#include <stdio.h>
/**
  * main - this is the main function
  * Return: always 0
  */
int main(void)
{
	int c;
	int d = 0;

		while (d < 10)
		{
			c  = 0;

		while (c < 10)
		{
			if (c != d && c < d)
			{
				putchar('0' + d);
				putchar('0' + c);
			}
			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
			}
			d++;
		}
			putchar('\n');
			return (0);
}

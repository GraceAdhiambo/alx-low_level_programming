#include <stdio.h>
/**
  * main - this is the main function
  * Description: prints alphabets in upper and lower case
  * Return: always 0
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	} while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
  * main - prints the fibonacci series
  * Result: always 0
  */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int count;

	for (count = 3; count <= 50; count++)
	{
		n3 = n1 + n2;

		printf("%d, %d, %d", n1, n2, n3);
	}
	for (n1 = n2 && n2 = n3)
	{
	printf("%d,", n3);
	}
	return (0);
}

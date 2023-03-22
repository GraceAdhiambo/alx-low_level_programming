#include <stdio.h>
/**
  * main - prints first 98 numbers
  * Return: always 0
  */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, num = 98, count = 0;

	printf("%d, ", fib1);
	printf("%d, ", fib2);
	count = 2;
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}

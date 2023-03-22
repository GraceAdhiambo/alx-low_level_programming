#include <stdio.h>
/**
  * main - prints firs 50 numbers in fibonacci series
  * Return: always 0
  */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, num = 50, count = 0;

	printf("%d, ", fib1);
	printf("%d, ", fib2);
	count = 2; /* fib1 and fib2 are already used */
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (count != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

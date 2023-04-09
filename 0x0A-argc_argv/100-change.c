#include <stdio.h>
/**
  * main - orints minimum no. of coins
  * @argc: no. of arguments
  * @argv: array of steing arguments
  * Return: 1
  */
int main(int argc, char *argv[])
{
	int i, cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = 0;
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			cents = cents * 10 + (argv[1][i] - '0');
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two nums
  * @argc: no. of arguments
  * @argv: array
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)/*checks if arguments are two*/
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);/* converts num to integer*/
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}

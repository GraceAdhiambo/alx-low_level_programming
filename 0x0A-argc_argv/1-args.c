#include <stdio.h>
/**
  * main - prints the no. of arguments
  * @argc: no. of arguments
  * @argv: pointer to string of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

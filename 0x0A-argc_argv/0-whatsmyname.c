#include <stdio.h>
/**
  * main - prints the name of orogram
  * @argc: no. of arguments
  * @argv: array of pointer to argument string
  * Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

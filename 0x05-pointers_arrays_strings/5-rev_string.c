#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * rev_string - prints string in reverse
  * @s: string to be printed
  * Return: 0
  */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

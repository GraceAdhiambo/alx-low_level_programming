#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string2
  * Return: pointer to result and Null otherwise
  */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t i, j;
	size_t length1 = 0;
	size_t length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	result = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}

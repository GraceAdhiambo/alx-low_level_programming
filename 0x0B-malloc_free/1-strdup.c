#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: copy of string
  * Return: pointer to duplicated string on success or Null otherwise
  */
char *_strdup(char *str)
{
	int length = 0;
	char *str2;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	str2 = (char *) malloc((length + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}

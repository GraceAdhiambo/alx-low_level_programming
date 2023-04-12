#include "main.h"
#include <stdlib.h>
/**
  * strtow - split string imto words
  * @str: string
  * Return: pointer if successfull and null otherwise
  */
char **strtow(char *str)
{
	int j, i = 0, count = 1;
	char *p = str;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			count++;
		}
		p++;
	}
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	p = strtok(str, " ");
	while (p != NULL)
	{
		words[i] = malloc(strlen(p) + 1);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[i], p);
		i++;
		p = strtok(NULL, " ");
	}
	words[count] = NULL;
	return (words);
}

#include <stdlib.h>
#include "main.h"
/**
 * word_count - counts number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int word_count(char *s)
{
	int j, i, w;

	j = 0;
	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}

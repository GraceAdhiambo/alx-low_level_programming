#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates two two strings
  * @s1: string 1
  * @s2: string 2
  * @n: no.of bytes
  * Return: pointer to new string or null if it fails
  *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len = 0, s2_len = 0;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	if (n >= s2_len)
		n = s2_len;
	concat_string = malloc(sizeof(char) * s1_len + n + 1);
	if (concat_string == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		concat_string[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		concat_string[s1_len + i] = s2[i];
	}
	concat_string[s1_len + n] = '\0';
	return (concat_string);
}

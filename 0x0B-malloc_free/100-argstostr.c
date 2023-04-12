#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * argstostr - concatenates all arguments
  * @ac: no.of arguments
  * @av: string of arguments
  * Return: pointer to new string or null
  */
char *argstostr(int ac, char **av)
{
	int i, j = 0, total_len = 0;
	char *str;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			total_len++;
			arg++;
		}
		total_len++;
	}
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			str[j++] = *arg++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}

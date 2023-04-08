#include "main.h"
/**
  * _islower - checks if alphabet is lowercase
  * @c: parameter to be checked
* Return: 1 if is lowercase
* and 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

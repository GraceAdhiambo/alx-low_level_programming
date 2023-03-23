#include "main.h"
/**
  * _isdigit - checks if parameter is a digit
  * @c: parameter
  * Return: 1 if is digit
  * and 0 if otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

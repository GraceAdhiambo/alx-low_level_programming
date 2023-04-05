#include "main.h"
/**
  * _pow_recursion - returns value of x to power y
  * @x: num 1
  * @y: num 2
  * Return: -1 if y<p, 1 if y=0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x,  y - 1));
}

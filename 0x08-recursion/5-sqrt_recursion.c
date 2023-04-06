#include "main.h"
/**
  * _sqrt_recursion - returns natural squareroot
  * @n: num parameter
  * Return: -1 if n has no natural squareroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_asqrt_recursion(n, 0));
}

/**
  *_asqrt_recursion - calculates squareroot of number
  * @n: number whose squareroot we're calculating
  * @i: num
  * Return: squareroot
  */
int _asqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_asqrt_recursion(n, i + 1));
}

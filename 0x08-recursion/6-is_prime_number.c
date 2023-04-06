#include "main.h"
/**
  *is_prime_number - checks if number is prime number
  * @n: number
  * Return: 1 if prime number 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
  * _prime_number - calculates if number is prime
  * @n: num 1
  * @i: num
  * Return: 1 if n is prime number 0 otherwise
  */
int _prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_number(n, i - 1));
}

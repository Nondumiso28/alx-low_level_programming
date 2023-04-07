#include "main.h"

/**
 * is_prime - identify if an input number is a prime number
 * @n: input number
 *
 * Return: 1 if n is a prime number, 0 if it is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
		return (n);
}

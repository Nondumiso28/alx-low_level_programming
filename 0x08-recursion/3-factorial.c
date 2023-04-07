#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: input number
 *
 * Return: return factorial of given number n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

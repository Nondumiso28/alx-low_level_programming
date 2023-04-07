#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a numberr
 *
 * @n: input number with natural square root
 *
 * Return: natuaral square root
 * On error, -1 if n does not have natuarl square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
       if (n == 0)
	       return (0);
       else if (n == 1)
	       return (1);
       else
	       return (n);

}

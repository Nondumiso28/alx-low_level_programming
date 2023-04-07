#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: prints the character
 *
 * Return: on Success 1
 * on error, -1 is returned and error is set proper
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

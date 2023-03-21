#include <stdio.h>

/**
 * main - Entry point
 *Description: 'print numbers of base 16'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

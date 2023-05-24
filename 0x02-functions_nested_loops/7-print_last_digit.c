#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10
	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}

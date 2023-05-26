#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be tested
 * Return: void
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		k = -k;
	}
	if (k / 10)
		print_number(k / 10);
	_putchar((unsigned int) k % 10 + '0');
}

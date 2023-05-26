#include "main.h"
/**
 * print_line - Draws a diagonal line
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_line(int n)
{
	int p, q;

	if (n <= 0)
		_putchar('\n');
	for (p = 0; p < n; p++)
	{
		for (q = 0; q < p; q++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

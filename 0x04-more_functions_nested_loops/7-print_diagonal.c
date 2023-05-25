#include "main.h"
/**
 * print_line - Draws a diagonal line
 * @size: the size of the square
 * Return: void
 */
void print_line(int n)
{
	int p, q;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}

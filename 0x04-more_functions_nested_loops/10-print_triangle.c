#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: the size of the triangle 
 * Return: void
 */
void print_triangle(int size)
{
	int p, q, r;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < size; p++)
		{
			for (q = size - x; q > 1; q--)
				_putchar(32);
			for (r = 0; r <= p; r++)
				_putchar(32);
			_putchar('\n');
		}
	}
}

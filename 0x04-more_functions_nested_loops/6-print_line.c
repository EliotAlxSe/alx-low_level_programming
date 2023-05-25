#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: nth times the charecter should be printed
 * Return: void
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
			_putchar(95);
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_numbers - Prints # from 0 to 9 except 2 and 4
 */
void print_numbers(void)
{
	int n = 0;

	for (; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			continue;
		else
			_putchar(ch + '0');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _isdigit - Checks for uppercase charecter
 * @c: The charecter to be tested
 * Return: 1 if @c is a digit else 0
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

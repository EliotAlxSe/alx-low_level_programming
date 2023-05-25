#include "main.h"
/**
 * _isupper - Checks for uppercase charecter
 * @c: The charecter to be tested
 * Return: 1 if @c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	return (0);
}

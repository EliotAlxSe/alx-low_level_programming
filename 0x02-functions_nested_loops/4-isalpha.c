#include "main.h"
/**
 * _islower - Alphabetic charecter testing
 * @c: The charecter to be tested
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}

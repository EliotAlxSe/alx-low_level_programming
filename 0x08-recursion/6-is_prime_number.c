#include "main.h"
/**
 * prime_test - Returns only prime
 * @n: Integer to be checked
 * @i: iterative number
 *
 * Return: prime
 */
int prime_test(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (prime_test(n, i + 1));
}
/**
 * is_prime_number - Returs prime number
 * @n: Integer to be tested
 *
 * Return: 1 for prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_test(n, 1));
}

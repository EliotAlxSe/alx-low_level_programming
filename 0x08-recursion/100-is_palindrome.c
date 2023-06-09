#include "main.h"
/**
 * strlen_rec - Lenth of a string
 * @n: String
 *
 * Return: Length of a string
 */
int strlen_rec(char *n)
{
if (*n == '\0')
{
return (0);
}
else
{
return (1 + strlen_rec(n + 1));
}
/**
 * comparator - compares each char of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns palindrome of a string
 * @s: String
 *
 * Return:  if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (comparator(s, 0, strlen_rec(s) - 1));
}

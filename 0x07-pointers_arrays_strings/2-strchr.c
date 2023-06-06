#include "main.h"
/**
 * _strchr -  a function that locates a character in a string.
 * @s: String
 * @c: Charecter
 *
 * Return: a pointer to the first occurrence of the character 
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (@s[i]);
	}
	return (0);
}

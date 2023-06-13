#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Adds two strings
 * @s1: The first string 
 * @s2: The second string
 *
 * Return: @s1 conc @s2. If Nothing is passed then return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str_result;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	str_result = malloc((sizeof(char) * l) + 1);

	if (str_result == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			str_result[k] = s1[k];
		if (k >= i)
		{
			str_result[k] = s2[j];
			j++;
		}
		k++;
	}
	str_result[k] = '\0';
	return (str_result);
}

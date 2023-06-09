#include "main.h"
#include <stdio.h>
/**
 * sqrt_ - Natural square root 
 * @n: Integer of a square root
 * @i: iterate number
 *
 * Return: Natural Square root
 */
int sqrt_(int n, int i)
{
        int sqrt = i * i;

        if (sqrt > n)
                return (-1);
        if (sqrt == n)
                return (i);
	return (sqrt_(n , i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Natural number
 *
 * Return: Square root of @n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}

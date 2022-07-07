#include "main.h"
/**
 * largest_number - returns the largest number
 * @a: first number
 * @b: second number
 * @c: third integer
 * 2-largest_number.c
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	int l = a;

	if (b > a && b > c)
	{
		l = b;
	}
	else if (c > b && c > b)
	{
		l = c;
	}

	return (l);
}

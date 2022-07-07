#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
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

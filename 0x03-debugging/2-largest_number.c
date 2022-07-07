#include "main.h"
/**
 * largest_number - returns the largest number
 * @x: first number
 * @y: second number
 * @z: third integer
 * 2-largest_number.c
 * Return: the largest number
 */
int largest_number(int x, int y, int z)
{
	int l = x;
	
	if (y > x && y > z)
	{
		l = y;
	}
	else if (z > x && z > y)
	{
		l =z;
	}

	return (l);
}

#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: input
 * 1-isdigit.c
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c > 49 && c < 58)
		return (1);
	else
		return (0);
}

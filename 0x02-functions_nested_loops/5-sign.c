#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: input character
 * 5-sign.c
 * Return: 1 if postive, 0 if 0
 * , otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

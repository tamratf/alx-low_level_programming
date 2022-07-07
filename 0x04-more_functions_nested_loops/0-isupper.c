#include "main.h"
/**
 * _isupper - check cap letter
 * @c: input charachter
 * 0-isupper.c
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

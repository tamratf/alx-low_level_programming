#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: input character
 * 3-islower.c
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	else
		return (0);
}

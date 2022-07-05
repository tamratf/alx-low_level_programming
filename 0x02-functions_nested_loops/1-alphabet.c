#include "main.h"
/**
 * print_alphabet - Entry point
 * 1-alphabet.c
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * 2-print_alphabet_x10.c
 * Return: Always 0 (Success)
 */
void  print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 9; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		c = 'a';
	}
}

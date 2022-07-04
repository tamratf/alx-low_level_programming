#include <stdio.h>
/**
 * main - Entry point
 * 4-print_alphabet.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

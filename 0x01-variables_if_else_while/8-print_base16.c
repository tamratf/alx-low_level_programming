#include <stdio.h>
/**
 * main - Entry point
 * 3-print_alphabets.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	c = 'a';
	for (; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * 6-print_numbers.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

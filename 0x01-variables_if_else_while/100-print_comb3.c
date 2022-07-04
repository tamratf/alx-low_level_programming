#include <stdio.h>
/**
 * main - Entry point
 * 100-print_comb3.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '1'

	for (; i <= '8'; i++)
	{
		for (; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
		j = i + 1;
	}
	putchar('\n');
	return (0);
}

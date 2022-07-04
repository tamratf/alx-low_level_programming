#include <stdio.h>
/**
 * main - Entry point
 * 101-print_comb4.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '1';

	for (; a <= '9'; a++)
	{
		for (; b <= '9'; b++)
		{
			for (; c <= '9'; c++)
			{
				for (; d <= '9'; d++)
				{
					if (a == c && b == d)
						continue;
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
				d = '0';
			}
			c = a;
			d = b + 2;
		}
		b = '0';
	}
	putchar('\n');
	return (0);
}


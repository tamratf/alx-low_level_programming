#include <stdio.h>
/**
 * main - main function
 * 102_fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a = 1;
	int b = 1;
	int s;

	printf("%ld", a);
	for (n = 1; n < 50; ++n)
	{
		s = a + b;
		printf(", %d", s);
		a = b;
		b = s;
	}
	putchar('\n');

	return (0);
}

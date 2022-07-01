#include <stdio.h>
/**
 * main - Entry point
 * Print to stderr
 * Return: 1
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", txt);
	return (1);
}

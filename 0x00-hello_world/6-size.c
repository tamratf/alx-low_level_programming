#include <stdio.h>
/**
 * main - Entry point
 * Print size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: " + sizeof(char) + " byte(s)");
	printf("Size of an int: " + sizeof(int) + " byte(s)");
	printf("Size of a long int: " + sizeof(long int) + " byte(s)");
	printf("Size of a long long int: " + sizeof(long long int) + " byte(s)");
	printf("Size of a float: " + sizeof(float) + " byte(s)");
	return (0);
}

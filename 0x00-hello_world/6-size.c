#include <stdio.h>
/**
 * main - Entry point
 * Print size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d\n bytes(s)", sizeof(char));
	printf("Size of an int: %d\n bytes(s)", sizeof(int));
	printf("Size of a long int: %d\n bytes(s)", sizeof(long int));
	printf("Size of a long long int: %d\n bytes(s)", sizeof(long long int));
	printf("Size of a float: %d\n bytes(s)", sizeof(float));
	return (0);
}

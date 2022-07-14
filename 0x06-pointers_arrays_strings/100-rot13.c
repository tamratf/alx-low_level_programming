#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;

	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
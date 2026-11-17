#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to encode.
 *
 * Return: pointer to the transformed string.
 */
char *leet(char *str)
{
	char *p = str;
	char *letters = "aAeEoOtTlL";
	char *digits = "4433007711";
	int i;

	while (*p != '\0')
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*p == letters[i])
			{
				*p = digits[i];
				break;
			}
		}
		p++;
	}
	return (str);
}

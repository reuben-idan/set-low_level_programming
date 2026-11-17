#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to measure.
 *
 * Return: length of string s.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

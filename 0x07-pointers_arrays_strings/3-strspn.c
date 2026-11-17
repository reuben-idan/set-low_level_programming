#include "main.h"

/**
 * _strspn - gets the length of a prefix containing accepted bytes.
 * @s: string to search.
 * @accept: bytes allowed in the prefix.
 *
 * Return: length of the initial accepted segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0' && *p != *s)
			p++;
		if (*p == '\0')
			break;
		count++;
		s++;
	}
	return (count);
}

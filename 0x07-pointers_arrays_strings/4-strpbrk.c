#include "main.h"

/**
 * _strpbrk - locates the first byte from accept in s.
 * @s: string to search.
 * @accept: bytes to search for.
 *
 * Return: pointer to the matching byte, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (0);
}

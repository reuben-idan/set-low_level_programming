#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search.
 * @needle: substring to find.
 *
 * Return: pointer to the first match, or NULL if no match is found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);
	for (start = haystack; *start != '\0'; start++)
	{
		h = start;
		n = needle;
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (start);
	}
	return (0);
}

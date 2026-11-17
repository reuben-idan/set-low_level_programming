#include "main.h"

/**
 * rev_string - reverses a string in place.
 * @s: string to reverse.
 */
void rev_string(char *s)
{
	int start, end, tmp;

	for (end = 0; s[end] != '\0'; end++)
		;
	end--;
	for (start = 0; start < end; start++, end--)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
	}
}

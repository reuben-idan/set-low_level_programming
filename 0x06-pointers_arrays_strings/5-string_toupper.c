#include "main.h"

/**
 * string_toupper - converts all lowercase letters to uppercase.
 * @str: string to transform.
 *
 * Return: pointer to the transformed string.
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - 'a' + 'A';
		p++;
	}
	return (str);
}

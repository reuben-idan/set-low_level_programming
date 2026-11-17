#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word in a string.
 * @str: string to transform.
 *
 * Return: pointer to the transformed string.
 */
char *cap_string(char *str)
{
	char *p = str;
	int capitalize_next = 1;

	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'z') && capitalize_next)
		{
			*p = *p - 'a' + 'A';
			capitalize_next = 0;
		}
		else if ((*p >= 'A' && *p <= 'Z') && capitalize_next)
			capitalize_next = 0;
		else if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' ||
			*p == ';' || *p == '.' || *p == '!' || *p == '?' ||
			*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
			capitalize_next = 1;
		else
			capitalize_next = 0;
		p++;
	}
	return (str);
}

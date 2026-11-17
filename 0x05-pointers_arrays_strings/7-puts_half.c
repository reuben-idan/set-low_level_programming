#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: string to print.
 */
void puts_half(char *str)
{
	int len, start, i;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;
	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

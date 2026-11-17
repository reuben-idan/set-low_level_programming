#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to reverse.
 */
void print_rev(char *s)
{
	int last;

	for (last = 0; s[last] != '\0'; last++)
		;
	for (last--; last >= 0; last--)
		_putchar(s[last]);
	_putchar('\n');
}

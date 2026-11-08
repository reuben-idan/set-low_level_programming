#include "main.h"

/**
 * print_alpha - Prints the lowercase alphabet once.
 */
static void print_alpha(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alpha();
		_putchar('\n');
	}
}

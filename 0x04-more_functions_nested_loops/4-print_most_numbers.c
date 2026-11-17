#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9 excluding 2 and 4.
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
	}
	_putchar('\n');
}

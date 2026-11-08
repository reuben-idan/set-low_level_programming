#include "main.h"

/**
 * print_number - Prints an integer value.
 * @n: The integer to print.
 */
static void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_to_98 - Prints integers from n to 98 in order.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	int current = n;

	if (n <= 98)
	{
		while (current <= 98)
		{
			print_number(current);
			if (current != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			current++;
		}
	}
	else
	{
		while (current >= 98)
		{
			print_number(current);
			if (current != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			current--;
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * more_numbers - prints 10 lines of numbers 0 to 14.
 */
void more_numbers(void)
{
	int count, num, tens, ones;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			tens = num / 10;
			ones = num % 10;
			if (tens > 0)
				_putchar(tens + '0');
			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}

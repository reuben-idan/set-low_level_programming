#include <stdio.h>

/**
 * main - Prints the base 16 digits in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}

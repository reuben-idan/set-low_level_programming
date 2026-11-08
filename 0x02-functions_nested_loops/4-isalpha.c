#include "main.h"

/**
 * _isalpha - Checks whether a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if alphabetic, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

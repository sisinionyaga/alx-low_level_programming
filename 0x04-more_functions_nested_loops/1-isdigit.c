#include "main.h"
/**
 * _isdigit - to check for a digit (0 through 9).
 * @c: The character to print
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

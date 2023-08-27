#include "main.h"

/**
 * _islower - will check for lowercases
 * @c: character to be checked as lowe cases
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

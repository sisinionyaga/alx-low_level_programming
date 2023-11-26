#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    int a;
    char *b;

    /* Set an integer variable to 1 to observe the byte order */
    a = 1;

    /* Point a character pointer to the first byte of the integer */
    b = (char *)&a;

    /* Return the value stored at the first byte (0 or 1) */
    return (*b);
}

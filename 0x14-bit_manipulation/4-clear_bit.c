#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to clear the bit in.
 * @index: Index at which to clear the bit.
 *
 * Return: 1 if success, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is within the valid range */
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    /*
     * Use a bitmask with the bit at the specified index set to 0
     * and bitwise AND to clear the bit at the specified index.
     */
    *n &= ~(1 << index);

    /* Return 1 to indicate success */
    return (1);
}

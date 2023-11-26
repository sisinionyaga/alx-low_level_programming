#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 *             to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int a, countbit = 0;
    unsigned long int current;
    unsigned long int exclusive = n ^ m;

    /*
     * Iterate through each bit of the exclusive OR (XOR)
     * result of n and m to count the differing bits.
     */
    for (a = 63; a >= 0; a--)
    {
        current = exclusive >> a;

        /* Check if the current bit is set (1) */
        if (current & 1)
            countbit++;
    }

    /* Return the count of differing bits */
    return (countbit);
}

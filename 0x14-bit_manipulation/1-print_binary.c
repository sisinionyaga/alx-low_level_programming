#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
    /* Edge case: If the number is 0, print '0' and return */
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    /* Helper function to recursively print binary digits */
    void print_recursive(unsigned long int num)
    {
        if (num == 0)
            return;

        print_recursive(num >> 1); /* Right shift to get next bit */
        _putchar((num & 1) + '0'); /* Mask and print the least significant bit */
    }

    /* Start the recursive printing */
    print_recursive(n);
}

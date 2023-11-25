#include <stdio.h>


/**
 * binary_to_uint - Entry point
 *
 * description: This function serves as the entry point for the program. 
 * It tests the
 * binary_to_uint function by calling it with different binary strings and
 * printing the results.
 *
 * Return: Always 0 (indicating successful execution)
 */

unsigned int binary_to_uint(const char *b) {
	if (b == NULL)
		return (0);
	unsigned int result = 0;
	char current;
	while ((current = *b++) != '\0')
	{
		if
			(current != '0' && current != '1') {
				/* Invalid character encountered */
				return (0);
			}
		result = result * 2 + (current - '0');
	}
	return result;
}
int main() {
	const char *binaryString = "1101";
	unsigned int result = binary_to_uint(binaryString);
	if (result != 0) {
		printf("Binary: %s\nUnsigned Integer: %u\n", binaryString, result);
	}
	else {
		printf("Invalid binary string\n");}
	return (0);
}

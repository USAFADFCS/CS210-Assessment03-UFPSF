/** a03-06.c
 * ===========================================================
 * Name:
 * Section:
 * Project: Assessment 3, Problem 6
 * ===========================================================
 */

#include <stdio.h>
#include <stdint.h>

// Prints the bits (provided to you for debugging)
void print_bits(void *ptr, int num_bytes)
{
    // Cast the pointer as an unsigned byte
    uint8_t *byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i)
    {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j)
        {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');

            // Separate groupings of 4 bits
            if (j == 4 || j == 0)
            {
                printf(" ");
            }
        }
    }
}

// YOUR FUNCTION GOES HERE


int main()
{
    // The following is test code that you can use/modify
    // int numToCheck = 0b10000000000000000000000000000000;

    // printf("Examining: onesThenZeros(");
    // print_bits(&numToCheck, 4);
    // printf(") returned %d\n\n", onesThenZeros(numToCheck));

    return 0;
}
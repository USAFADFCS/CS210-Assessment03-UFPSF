/** a03-07.c
* ===========================================================
* Name: 
* Section:
* Project: Assessment 3, Problem 7
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


// YOUR CODE GOES HERE



int main() {
    // The following is test code that you can use/modify
    // int word = 0b01000111001101010001001100011101;
    // printf("findPattern(%d) = %d\n\n", word, findPattern(word));

    return 0;
}
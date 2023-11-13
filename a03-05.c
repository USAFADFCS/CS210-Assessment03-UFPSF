/** a03-05.c
* ===========================================================
* Name: 
* Section:
* Project: Assessment 3, Problem 5
* ===========================================================
*/

#include <stdint.h>
#include <stdio.h>

// Prints the bits (provided to you for debugging)
void print_bits(void* ptr, int num_bytes) {
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');

            // Separate groupings of 4 bits
            if (j == 4 || j == 0) {
                printf(" ");
            }
        }
    }

    // End with a new line
    printf("\n");
}


// YOUR FUNCTION GOES HERE



int main() {
    // The following is test code that you can use/modify
    // unsigned int originalNumber = 0b00111110001000000000000000000000;
    // unsigned int newExponent    = 0b11110000;
    
    // printf("Before:  ");
    // print_bits(&originalNumber, sizeof(int));
    
    // printf("New Exp: ");
    // print_bits(&newExponent, sizeof(int));

    // int newIEEE = replaceExponent(originalNumber, newExponent);
    
    // printf("After:   ");
    // print_bits(&newIEEE, sizeof(int));

    return 0;
}
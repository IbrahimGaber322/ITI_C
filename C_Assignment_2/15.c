#include <stdio.h>

unsigned char reverseBinary(unsigned char num) {
    unsigned char reversed = 0;

    for (int i = 0; i < 8; i++) {
        reversed = (reversed << 1) | (num & 1); // Shift and add the least significant bit
        num = num >> 1; // Right shift to process the next bit
    }

    return reversed;
}

int main() {
    unsigned char num, reversedNum;

    printf("Enter an 8-bit number: ");
    scanf("%hhu", &num);

    reversedNum = reverseBinary(num);

    printf("Reversed binary: %hhu\n", reversedNum);

    return 0;
}


#include <stdio.h>

int countOnes(unsigned int num) {
    int count = 0;
    
    while (num) {
        count += (num & 1);  // Check the least significant bit
        num = num >> 1;      // Right-shift to check the next bit
    }
    
    return count;
}

int main() {
    unsigned int num;
    
    printf("Enter an unsigned 32-bit integer: ");
    scanf("%u", &num);
    
    int onesCount = countOnes(num);
    
    printf("Number of 1's in the binary representation: %d\n", onesCount);
    
    return 0;
}

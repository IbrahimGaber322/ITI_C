#include <stdio.h>

int countOnes(unsigned char num) {
    int count = 0;
    
    for (int i = 0; i < 8; i++) {
        count += (num & 1);  // Check the least significant bit
        num = num >> 1;      // Right-shift to check the next bit
    }
    
    return count;
}

int main() {
    unsigned char num;
    
    printf("Enter an unsigned 8-bit integer: ");
    scanf("%hhu", &num);
    
    int onesCount = countOnes(num);
    
    printf("Number of 1's in the binary representation: %d\n", onesCount);
    
    return 0;
}

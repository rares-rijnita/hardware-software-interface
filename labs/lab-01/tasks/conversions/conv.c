#include <stdio.h>

void dec_to_bin_hex(int n) {
    printf("Decimal: %d\n", n);
    printf("Binary: 0b");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\nHexadecimal: 0x%X\n\n", n);
}

void bin_to_dec(unsigned int b) {
    printf("Binary: 0b%X\n", b);
    printf("Decimal: %u\n\n", b);
}

void hex_to_dec(unsigned int h) {
    printf("Hexadecimal: 0x%X\n", h);
    printf("Decimal: %u\n\n", h);
}

void hex_to_bin(unsigned int h) {
    printf("Hexadecimal: 0x%X\n", h);
    printf("Binary: 0b");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (h >> i) & 1);
    }
    printf("\n\n");
}

void bin_to_hex(unsigned int b) {
    printf("Binary: 0b%X\n", b);
    printf("Hexadecimal: 0x%X\n\n", b);
}

int main() {

    dec_to_bin_hex(121);
    dec_to_bin_hex(18446);


    bin_to_dec(0b1100010111010010);
    hex_to_dec(0xBB29);


    hex_to_bin(0x5E);
    hex_to_bin(0x4A01);


    bin_to_hex(0b01111101);
    bin_to_hex(0b1000110000011111);

    return 0;
}
#include <stdio.h>
#include <stdint.h>

int main() {
    int VMA;

    printf("Enter Virtual Memory Address:");
    scanf("%d", &VMA);

    uint32_t a = 0b1111111111;
    uint32_t b = 0b11111111111;
    uint32_t r = (a & b);

    uint32_t c = 0b11111111111;
    uint32_t d = 0b11111111111111111;
    uint32_t r2 = (c & d);

    int msb_r = (b & 0b00000000);
    int msb_r2 = (d & 0b0000001);

    while (VMA <= 1023) {
        printf("%d %d", VMA, msb_r);
        break;
    }

    while (VMA >= 1024 && VMA <= 2047) {
        printf("\n%d %d", VMA, msb_r2);
        break;
    }

    

    //printf("a & b = %d\n", (r));
    //printf("a & b = %d\n", (r2));

    //printf("MSB of a & b = %d\n", msb_r);
    //printf("MSB of c & d = %d\n", msb_r2);

    return 0;
}
#include <stdio.h>

void swap(int *a_ptr, int *b_ptr) {
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}

int main() {

    int a = 100;
    int b = 5;

    printf("Before:\n");
    printf("First Value: %d \n Address: %p", a, &a);
    printf("\nSecond Value: %d \n Address: %p", b, &b);
    
    swap(&a, &b);

    printf("After:\n");
    printf("First Value: %d\nAddress: %p\n", a, &a);
    printf("Second Value: %d\nAddress: %p\n", b, &b);

    return 0;


}
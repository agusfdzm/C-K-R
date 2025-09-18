#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int b = 2;

    printf("A: %d\nB: %d", a, b);
    swap(&a, &b);
    printf("A: %d\nB: %d", a, b);
}
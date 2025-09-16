#include <stdio.h>

void swap(int* n1, int* n2) {
    int temp = *n1;

    *n1 = *n2;
    *n2 = temp;

    printf("Despues del swap: Var1: %u y Var2: %u", &n1, &n2);
}

int main() {
    int var1 = 10;
    int var2 = 100;

    printf("Antes del swap: Var1: %u y Var2: %u\n", &var1, &var2);

    swap(&var1, &var2);
}
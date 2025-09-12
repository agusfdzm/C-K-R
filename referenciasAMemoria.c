#include <stdio.h>

void jugar(int* n) {
    *n = *n + 2;
}

int main() {
    int x = 10;
    jugar(&x);
    printf("%d", x);
    return 0;
}
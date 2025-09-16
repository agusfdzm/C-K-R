#include <stdio.h>

void jugar(int n) {
    n = (n + 3) * 2;
    printf("%d\n", n);
    printf("Direccion en memoria: %u\n", &n);
}

int main() {
    int x = 10;
    jugar(x);
    printf("X = %d\n", x);
    printf("Funcion main: %u\n", &x);
    return 0;
}
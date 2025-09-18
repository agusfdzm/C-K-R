#include <stdio.h>

void mult(int *n, int hasta) {
    int i;

    for (i = 1; i <= hasta; i++) {
        int mult = *n * i;
        printf("%d * %d = %d\n", *n, i, mult);
    }
}

int main() {
    int numUser;
    char bitActivador;
    int limite = 10;

    printf("Pulsa 1 si quieres hacer la tabla de multiplicar hasta 20 y 0 si solo quieres hasta 10. ");
    scanf("%d", &bitActivador);

    if (bitActivador == 1) {
        limite = 20;
    }

    printf("Introduce el numero que quieras: ");
    scanf("%d", &numUser);

    mult(&numUser, limite);
}
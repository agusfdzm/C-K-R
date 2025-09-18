#include <stdio.h>

void activador() {

}

void mult(int *n) {
    int i;

    for (i = 1; i <= 10; i++) {
        int mult = *n * i;
        printf("%d * %d = %d\n", *n, i, mult);
    }
}

int main() {
    int numUser;
    char bitActivador;

    printf("Pulsa 1 si quieres hacer la tabla de multiplicar hasta 20 y 0 si solo quieres hasta 10. ");
    scanf("%d", &bitActivador);

    printf("Introduce el numero que quieras: ");
    scanf("%d", &numUser);

    mult(&numUser);
}
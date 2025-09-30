#include <stdio.h>

int main() {
    int numero_usuario;
    printf("Introduce un numero: ");
    scanf("%d", &numero_usuario);

    for (int i=1;i<=10;i++) {
        int mult = numero_usuario * i;
        printf("%d * %d = %d\n", numero_usuario, i, mult);
    }

    return 0;
}
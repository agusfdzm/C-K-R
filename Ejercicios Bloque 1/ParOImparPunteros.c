/*

Par o impar con punteros

Pide un número al usuario.

Usa un puntero para almacenar la dirección de la variable.

Determina con un if si el número es par o impar.

*/

#include <stdio.h>

int main() {
    int numero;
    int* pN = &numero;

    printf("Introduce un numero: ");
    scanf("%d", &numero);
    
    if (*pN % 2 == 0) {
        printf("%d es par", numero);
    } else {
        printf("%d no es par", numero);
    }
}
#include <stdio.h>

int main() {
    int *ptr; // Se usa * para definir que es una variable puntero. También hay que especificar el tipo de dato

    int edad = 18;
    void *ptrEdad = & edad;

    printf("%p", (void*)ptrEdad); // Se usa el identificador de puntero %p
    return 0;
}


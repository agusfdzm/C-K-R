#include <stdio.h>

int main() {
    int enteros[] = {0, 1, 2, 3, 4, 5};
    int longitud_array = sizeof(enteros) / sizeof(enteros[0]); // Devuelve el número de elementos del array. 
    int *p_enteros = enteros;


    for (int i = 0; i < longitud_array; i++) {
        printf("%d\n", (*p_enteros + i));
    }
}
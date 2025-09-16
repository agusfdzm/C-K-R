#include <stdio.h>

int main() {
    int primer_array[10];
    int arrayl_len = 10;
    int i;

    for (i = 1; i <= arrayl_len; i++) {
        int posicion_array = i - 1;
        printf("Que quieres anadir en la posicion %d del array? ", i-1);
        scanf("%d", &primer_array[posicion_array]);
    }

    printf("Array rellenado\n");

    for (i = 1; i <= arrayl_len; i++) {
        printf("%d\n", primer_array[i - 1]);
    }
}
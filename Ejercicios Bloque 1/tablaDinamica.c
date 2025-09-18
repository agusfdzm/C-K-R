#include <stdio.h>

int main() {
    int n;
    int resultados[10];

    int *array = resultados;

    printf("Introduce un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        int resultado = n * i;
        *array = resultado;  // ✅ correcto: guardamos el resultado en la posición del puntero

        printf("%d * %d = %d\n", n, i, resultado);
        array++;
    }

    // error: printf(resultados) no funciona porque 'resultados' es int*,
    //    printf necesita una cadena de formato. Además, el array tiene tamaño 10, índices 0..9
    // ✅ corregido: imprimimos todos los elementos con un bucle
    printf("Contenido del array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resultados[i]); // usamos formato "%d" para cada valor
    }
    printf("\n"); // salto de línea final

    return 0;
}

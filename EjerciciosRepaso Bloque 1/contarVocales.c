#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char vocales[5] = {'A', 'E', 'I', 'O', 'U'};
    char input_usuario[30];

    printf("Introduce una palabra o frase: ");
    fgets(input_usuario, MAX, stdin);

    int longitud = strlen(input_usuario);
}
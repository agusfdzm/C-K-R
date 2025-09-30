#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

struct ficha_persona {
    int edad;
    char nombre[15];
    bool vive;
    float dinero;
};

int añadir_ficha() {
    return 0;
}

int main() {
    char ficha;
    printf("Agregar ficha (S/N): ");
    scanf("%c", &ficha);
    ficha = toupper(ficha);

    if (ficha == 'S') {
        añadir_ficha();
    } else if (ficha == 'N') {
        printf("No se agregara ninguna ficha...");
    } else {
        printf("Respuesta no valida");
    }
}
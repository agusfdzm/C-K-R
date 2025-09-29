#include <stdio.h>
#include <string.h>

struct cuenta_usuario {
    char nombre[20];
    char apellido[35];
    int identificador;
    float saldo;
};

void imprimir_datos(struct cuenta_usuario *c) {
    printf("El cliente %s %s con el identificador %d tiene %f euros en la cuenta", c->nombre, c->apellido, c->identificador, c->saldo);
}

int main() {
    struct cuenta_usuario c1;
    strcpy(c1.nombre, "Agus");
    c1.identificador = 9129;
    c1.saldo = 1281.21;

    imprimir_datos(&c1);
    return 0;
}
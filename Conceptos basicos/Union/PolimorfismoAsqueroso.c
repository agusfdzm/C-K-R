#include <stdio.h>
#include <stdbool.h>

enum tipo_objeto {PERSONA, PRODUCTO};

union dato_objeto {
    struct {
        int edad;
        double dinero;
        bool vivo;
    } PERSONA;

    struct {
        double precio;
        int stock;
    } PRODUCTO;
};

struct objeto {
    enum tipo_objeto tipo;
    union dato_objeto dato;
};

void imprimir(struct objeto o) {
    if (o.tipo == PERSONA) {
        printf("Eres una persona de %d años", o.dato.PERSONA.edad);
    } else {
        printf("NO ERES UNA PERSONA");
    }
}

int main() {
    struct objeto o1;
    o1.tipo = PERSONA;
    o1.dato.PERSONA.edad = 20; 

    imprimir(o1);
}
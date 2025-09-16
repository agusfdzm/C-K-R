#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Persona p1;

    strcpy(p1.nombre, "Agus");
    p1.edad = 20;
    p1.altura = 1.73;

    printf("Mi nombre es: %s\n", p1.nombre);
    printf("Mi edad es: %d\n", p1.edad);
    printf("Mi altura es: %f\n", p1.altura);
}
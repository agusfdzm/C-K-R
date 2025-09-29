#include <stdio.h>

struct cuenta {
	char nombre[30];
	char apellido[40];
	int identificador;
	float saldo;
};

int main() {
    struct cuenta c1;
    c1.nombre[30] = "Agus";
    c1.identificador = 3211;
    c1.saldo = 1240.12;

    return 0;
}
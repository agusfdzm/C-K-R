#include <stdio.h>

void factorial(int* n) {
    int i = 1;
    int nFact = 1;

    while (i <= *n) { // Lee el valor de numUser
        nFact = nFact * i;
        i++;
    }
    
    *n = nFact;
}

int main() {
    int numUser;
    printf("Introduce un numero: ");
    scanf("%d", &numUser);

    factorial(&numUser); // Pasamos la dirección de memoria de numUser

    printf("El factorial es: %d", numUser);
}
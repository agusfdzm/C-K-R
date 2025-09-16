#include <stdio.h>

void factorial(int n) {
    int i = 1;
    int nFact = 1;

    while (i <= n) {
        nFact = nFact * i;
        i++;
    }
    printf("%d", nFact);
}

int main() {
    int numUser;
    printf("Introduce un numero: ");
    scanf("%d", &numUser);

    factorial(numUser);
}
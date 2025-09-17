#include <stdio.h>

void mult(int n) {
    int i;

    for (i = 1; i <= 10; i++) {
        int mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }
}

int main() {
    int numUser;

    printf("Introduce el numero que quieras: ");
    scanf("%d", &numUser);

    mult(numUser);
}
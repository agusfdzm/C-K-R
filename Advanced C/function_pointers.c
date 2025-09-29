#include <stdlib.h>  // memoria dinámica, conversiones y otras funciones
#include <stdbool.h> // añade booleano 
#include <stdio.h>   // entrada / salida

int foo(int x, int y) {
    return x + y;
}

bool p(int x) {
    return x % 2 == 0;
}

void print_if(int xs[10], bool (*predicate)(int)) {
    for (int i = 0; i < 10; i++) {
        if (predicate(xs[i])) {
            printf("%d\n", xs[i]);
        }
    }
}

int main() {
    int xs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_if(xs, p);
}

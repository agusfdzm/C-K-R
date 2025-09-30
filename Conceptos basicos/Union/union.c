#include <stdio.h>
#include <stdbool.h>

union mi_union_t {
    int edad;
    float dinero;
    bool vivo; 
};

int main() {
    union mi_union_t persona_1;

    persona_1.edad = 20;
    printf("%d", persona_1.edad);
}
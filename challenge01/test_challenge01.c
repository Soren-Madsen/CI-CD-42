#include <assert.h>
#include <stdio.h>

// Declaración externa de la función a probar
int suma(int a, int b);

void test_suma_positivos() {
    assert(suma(2, 3) == 5);
}

void test_suma_positivo_negativo() {
    assert(suma(5, -2) == 3);
}

void test_suma_negativos() {
    assert(suma(-4, -6) == -10);
}

int main() {
    test_suma_positivos();
    test_suma_positivo_negativo();
    test_suma_negativos();
    printf("All tests passed for challenge01.\n");
    return 0;
}

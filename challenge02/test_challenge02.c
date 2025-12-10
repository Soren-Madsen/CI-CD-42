#include <assert.h>
#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

void test_suma_positivos() {
    assert(suma(2, 3) == 5);
}

void test_suma_positivo_negativo() {
    assert(suma(5, -2) == 3);
}

void test_suma_negativos() {
    assert(suma(-4, -6) == -10);
}
void test_resta_positivos() {
    assert(resta(5, 3) == 2);
}

void test_resta_positivo_negativo() {
    assert(resta(5, -2) == 7);
}

void test_resta_negativos() {
    assert(resta(-4, -6) == 2);
}

void test_multiplicacion_positivos() {
    assert(multiplicacion(4, 3) == 12);
}

void test_multiplicacion_positivo_negativo() {
    assert(multiplicacion(4, -2) == -8);
}

void test_multiplicacion_negativos() {
    assert(multiplicacion(-4, -3) == 12);
}

void test_division_positivos() {
    assert(division(6, 3) == 2);
}

void test_division_positivo_negativo() {
    assert(division(6, -2) == -3);
}

void test_division_negativos() {
    assert(division(-6, -3) == 2);
}

void test_division_por_cero() {
    assert(division(5, 0) == 0);
}

int main() {
    test_suma_positivos();
    test_suma_positivo_negativo();
    test_suma_negativos();
    test_resta_positivos();
    test_resta_positivo_negativo();
    test_resta_negativos();
    test_multiplicacion_positivos();
    test_multiplicacion_positivo_negativo();
    test_multiplicacion_negativos();
    test_division_positivos();
    test_division_positivo_negativo();
    test_division_negativos();
    printf("All tests passed for challenge02.\n");
    return 0;
}

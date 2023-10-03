#include<stdio.h>

#define QTS_NUMEROS 100

void mostrarNumeros(int lista[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("lista[%i] = %i\n", i, lista[i]);
    }
    return;
}

//("87, 31, 71, 36, 24, 63... 85, 87".match(/,/g)||[]).length => 99
//("87, 31, 71, 36, 24, 63".match(/,/g)||[]).length => 5
int main() {
    int i, j, triangulacao;
    int meusNumeros[QTS_NUMEROS] = {87, 31, 71, 36, 24, 63, 89, 15, 34, 81, 63, 87, 65, 76, 56, 39, 62, 91,
    19, 71, 34, 66, 19, 17, 81, 23, 17, 83, 21, 44, 77, 23, 62, 75, 40, 39, 51, 59, 83, 39, 94,
    25, 76, 19, 43, 62, 79, 83, 93, 22, 73, 38, 94, 33, 70, 63, 32, 87, 55, 61, 61, 50, 24, 91,
    51, 45, 86, 65, 58, 36, 62, 46, 54, 83, 84, 40, 29, 22, 66, 37, 44, 34, 87, 72, 38, 58, 55,
    89, 65, 69, 55, 65, 72, 90, 42, 52, 76, 22, 85, 87};

    int ordenado[QTS_NUMEROS] = {0};

    // Copiar arrays
    for(i = 0; i < QTS_NUMEROS; i++) {
        ordenado[i] = meusNumeros[i];
    }

    for(i = 0; i < QTS_NUMEROS; i++) {
        for(j = 0; j < QTS_NUMEROS; j++) {
            if(ordenado[i] < ordenado[j]) {
                triangulacao = ordenado[j];
            }
            ordenado[i] = triangulacao;
        }
    }

    mostrarNumeros(meusNumeros, QTS_NUMEROS);
    printf("Ordenado =>\n");
    mostrarNumeros(ordenado, QTS_NUMEROS);
    return 0;
}
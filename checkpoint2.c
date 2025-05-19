#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_FIB 50
#define MAX_FAT 20
#define MAX_PALINDROMO 100
#define MAX_STRING 100

// Funcao para calcular a sequencia de Fibonacci
void fibonacci() {
    int N;
    printf("\n--- Sequencia de Fibonacci ---\n");
    printf("Digite a quantidade de termos (1 a 50): ");
    scanf("%d", &N);

    if (N < 1 || N > MAX_FIB) {
        printf("Numero fora do intervalo permitido.\n\n");
        return;
    }

    int fib[MAX_FIB];
    fib[0] = 0;
    if (N > 1) fib[1] = 1;

    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Resultado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n\n");
}

// Funcao para calcular fatoriais
void fatoriais() {
    int N;
    printf("\n--- Calculo de Fatoriais ---\n");
    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &N);

    if (N < 1 || N > MAX_FAT) {
        printf("Numero fora do intervalo permitido.\n\n");
        return;
    }

    int fat[MAX_FAT + 1];
    fat[0] = 1;
    for (int i = 1; i <= N; i++) {
        fat[i] = fat[i - 1] * i;
    }

    printf("Resultado:\n");
    for (int i = 1; i <= N; i++) {
        printf("%d! = %d\n", i, fat[i]);
    }
    printf("\n");
}


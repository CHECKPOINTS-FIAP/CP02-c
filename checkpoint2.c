//Lucas Andrade Souza RM: 564066
//Luis Otavio Santini Feitosa RM: 563556

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

// Funcao para verificar palindromo
void palindromo() {
    char palavra[MAX_PALINDROMO + 1];
    printf("\n--- Verificacao de Palindromo ---\n");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);
    bool isPalindromo = true;

    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            isPalindromo = false;
            break;
        }
    }

    if (isPalindromo) {
        printf("A palavra e um palindromo.\n\n");
    } else {
        printf("A palavra NAO e um palindromo.\n\n");
    }
}

// Funcao para verificar substring
void verificarSubstring() {
    char str1[MAX_STRING + 1], str2[MAX_STRING + 1];
    printf("\n--- Verificacao de Substring ---\n");
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2) != NULL) {
        printf("A segunda string esta contida na primeira.\n\n");
    } else {
        printf("A segunda string NAO esta contida na primeira.\n\n");
    }
}

// Funcao principal com menu
int main() {
    int opcao;

    do {
        printf("\nMenu de Exercicios\n");
        printf("1 - Sequencia de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palindromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                palindromo();
                break;
            case 4:
                verificarSubstring();
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

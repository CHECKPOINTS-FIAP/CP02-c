# Projeto de Exercícios em C

Este projeto em C contém quatro funcionalidades distintas, divididas entre dois colaboradores: Lucas Andrade e Luisin Santini.

## Contribuições

### Lucas Andrade

Lucas Andrade foi responsável pela implementação das funções relacionadas a cálculos numéricos:

* **Sequência de Fibonacci (`fibonacci()`):**
    * Solicita ao usuário a quantidade de termos desejada para a sequência de Fibonacci.
    * Valida se a entrada está dentro do intervalo permitido (1 a 50).
    * Calcula e exibe a sequência de Fibonacci até o número de termos especificado.
    * Utiliza um array para armazenar os termos da sequência.

* **Cálculo de Fatoriais (`fatoriais()`):**
    * Solicita ao usuário um número inteiro para calcular os fatoriais.
    * Valida se a entrada está dentro do intervalo permitido (1 a 20).
    * Calcula e exibe o fatorial de todos os números de 1 até o número inserido.
    * Utiliza um array para armazenar os valores dos fatoriais.

### Luisin Santini

Luisin Santini contribuiu com as funções de manipulação de strings e a estrutura principal do programa:

* **Verificação de Palíndromo (`palindromo()`):**
    * Solicita ao usuário que digite uma palavra.
    * Verifica se a palavra digitada é um palíndromo (lê-se da mesma forma de trás para frente).
    * Exibe uma mensagem indicando se a palavra é ou não um palíndromo.

* **Verificação de Substring (`verificarSubstring()`):**
    * Solicita ao usuário que digite duas strings.
    * Utiliza a função `strstr` da biblioteca `string.h` para verificar se a segunda string está contida na primeira.
    * Exibe uma mensagem informando se a segunda string é uma substring da primeira.

* **Menu Principal (`main()`):**
    * Implementou um menu interativo que permite ao usuário escolher qual das quatro funcionalidades executar.
    * Utiliza um loop `do-while` para manter o menu ativo até que o usuário escolha a opção de sair (0).
    * Utiliza uma estrutura `switch` para direcionar a execução para a função correspondente à opção escolhida pelo usuário.
    * Incluiu tratamento para opções inválidas do menu.

## Como Executar

1.  Compile o código utilizando um compilador C (por exemplo, GCC):
    ```bash
    gcc parte1_lucas.c parte2_luisin.c -o exercicios
    ```
2.  Execute o programa:
    ```bash
    ./exercicios
    ```

Siga as instruções no menu para interagir com as diferentes funcionalidades implementadas.

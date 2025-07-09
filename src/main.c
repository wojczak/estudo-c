/*main usando funcoes

#include <stdio.h>
#include "calc.h" //chamada do arquivo de cabeçalho


int main()
{

    int a, b;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    printf("A soma deu %d: \n", soma(a, b));
    printf("A multiplicacao deu %d: \n", multiplicacao(a, b));

    getchar();
    getchar(); // Limpa o buffer do teclado

    return 0;
}

*/

/* main.c - Programa que lê 5 números e os exibe na ordem inversa
#include <stdio.h>

int main()
{
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: \n", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("Numero %d - %d \n", i + 1, num[i]);
        ;
    }
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar uma tecla antes de fechar o programa
    return 0;
}
*/

/* main.c - Programa que lê uma matriz 2x3, exibe seus valores e os transpostos
   Este programa lê uma matriz de inteiros 2x3, exibe os valores inseridos,
   e depois exibe a matriz transposta (3x2).
#include <stdio.h>

int main()
{
    int matriz[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar uma tecla antes de fechar o programa

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar uma tecla antes de fechar o programa

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", matriz[j][i]);
        }
        printf("\n");
    }
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar uma tecla antes de fechar o programa

    return 0;
}
    */

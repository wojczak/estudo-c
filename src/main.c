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

/* lendo string com fgets, e removendo o caractere de nova linha

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    printf("Digite seu nome:\n");

    fgets(nome, 50, stdin); // Lê uma linha de entrada do usuário, incluindo espaços

    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha
    // strcspn encontra o índice do primeiro caractere de nova linha e substitui por '\0' (null terminator)
    printf("Seu nome e: %s\n", nome);

    getchar();
    getchar();

    return 0;
}

*/

/*Lendo nome e sobrenome, removendo enter \n, usando strcpy para copiar string
strcat para concatenar string


#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];         // Vetor para o nome (20 caracteres)
    char sobrenome[20];    // Vetor para o sobrenome (20 caracteres)
    char nomecompleto[40]; // Vetor para o nome completo (20 + 1 + 19 = 40, sobra espaço)

    printf("Digite seu nome:\n");
    fgets(nome, 20, stdin);           // Lê até 49 caracteres + \0
    nome[strcspn(nome, "\n")] = '\0'; // Remove ENTER

    printf("Digite seu sobrenome:\n");
    fgets(sobrenome, 20, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0'; // Remove ENTER

    strcpy(nomecompleto, nome);      // Copia nome para nomecompleto
    strcat(nomecompleto, " ");       // Adiciona um espaço
    strcat(nomecompleto, sobrenome); // Adiciona sobrenome ao final

    printf("Nome Completo e: %s\n", nomecompleto);                   // Imprime nome completo
    printf("Tamanho do nome completo: %zu\n", strlen(nomecompleto)); // Mostra tamanho

    getchar(); // Pausa o programa (opcional, já que fgets consome ENTER)

    return 0;
}

*/

/*contar letras especificas em um array de string

#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int contador = 0;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0'; // remove o ENTER

    // Laço para percorrer cada caractere da string
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'A') {
            contador++; // soma 1 se for 'a' ou 'A'
        }
    }

    printf("A frase tem %d letras 'a' ou 'A'.\n", contador);

    return 0;
}
*/

#include <stdio.h>
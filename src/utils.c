#include <stdio.h>
#include <string.h>
#include "utils.h"
#include <stdlib.h>

void adicionarnome(char nomes[][50], int *contador)

{

    if (*contador >= 3)
    {
        system("cls");
        printf("Limite de nomes atingido.\n");
        puts("Pressione Enter para continuar...");
        getchar();
        system("cls");
        return;
    }
    printf("Digite o nome %d: \n\n", *contador + 1);
    fgets(nomes[*contador], 50, stdin);                       // Lê até 49 caracteres + '\0'
    nomes[*contador][strcspn(nomes[*contador], "\n")] = '\0'; // Remove o caractere de nova linha
    (*contador)++;                                            // Incrementa o contador de nomes
    puts("\n\nNome adicionado com sucesso!\n");
    puts("Pressione Enter para continuar...");
    getchar();
    system("cls");
}

void listarnome(char nomes[][50], int contador)
{
    if (contador == 0)
    {
        printf("\nNenhum nome foi adicionado.\n");
        getchar();
        system("cls");
        return;
    }
    printf("\nLista de nomes:\n\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }
    puts("\n\nPressione Enter para continuar...");
    getchar();
    system("cls");
}

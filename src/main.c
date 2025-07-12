
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char nomes[10][50]; // Array para armazenar 10 nomes, cada um com até 49 caracteres + '\0'

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome %d: \n", i + 1);
        fgets(nomes[i], 50, stdin); // Lê até 49 caracteres + '\0'
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}
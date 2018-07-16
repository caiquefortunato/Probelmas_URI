#include <stdio.h>
#include <stdlib.h>

int main()
{
    int itens, entrada, flag;
    char aux;
    char vetor[27];
    int i, j, cont = 0;

    while(1)
    {
        cont+=1, flag = 0;
        // Preencho o vetor com o alfabeto
        for(i = 1; i < 27; i++)
            vetor[i] = (i + 'A') - 1;

        // Leio a quantidade de entradas
        scanf("%d", &itens);
        if(itens == 0) break;

        // Leio a mensagem de tamanho itens
        for(i = 0; i < itens; i++)
        {
            scanf("%d", &entrada);
            if(flag == 0)
            {
                printf("Instancia %d\n", cont);
                flag = 1;
            }

            printf("%c", vetor[entrada]);

            aux = vetor[entrada];

            // Realizo as operacoes no vetor
            for(j = entrada - 1; j >= 1; j--)
            {
                vetor[j + 1] = vetor[j];
            }
            vetor[1] = aux;
        } // fim da leitura de mensagens
        printf("\n\n");
    }

    return 0;
}

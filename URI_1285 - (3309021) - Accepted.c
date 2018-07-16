#include<stdio.h>
#include <string.h>

int tem_igual(int a)
{

    char vetor[100];
    int tam;
    int i,j = 0, repetido = 0, atual;

    sprintf(vetor, "%d", a);

    tam = strlen(vetor);

    // Olho os valores repetidos do vetor
    for(i = 0; i < tam; i++)
    {
        atual = vetor[i];
        for(j = i + 1; j < tam; j++)
        {
            if(atual == vetor[j])
                repetido++;
        }
    }

    if(repetido > 0)
    {
        return 0;
    }
    else if(repetido == 0)
    {
        return 1;
    }
}

int main()
{
    int inicio, fim, quantidade;
    int i, total;

    while(scanf("%d %d", &inicio, &fim) != EOF)
    //while(1) //
    {
        //scanf("%d %d", &inicio, &fim);//
        total = 0, quantidade = 0;
        for(i = inicio; i <= fim; i++)
        {
            quantidade = tem_igual(i);
            total += quantidade;
        }
        printf("%d\n", total);
    } // fim dos casos de teste

}

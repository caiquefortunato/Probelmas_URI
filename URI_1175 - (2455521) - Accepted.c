#include <stdio.h>
 
int main() {
    
    int vetor[20];
    int i = 0, j = 20, aux = 0;
    
    // Lê os elementos do vetor de tamanho 20
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    // Troca as posicoes
    for(i = 0; i < 10; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[20 - i - 1];
        vetor[20 - i - 1] = aux;
    }
    
    for(i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}
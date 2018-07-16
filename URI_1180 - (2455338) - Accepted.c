#include <stdio.h>

int main()
{
    int tamanho, i, posicao;
    scanf("%d", &tamanho);
    if(tamanho > 1000) return 0;
    int vetor[tamanho];
    
    // Preenche os elementos do vetor
    for(i = 0; i < tamanho; i++)
    {
          scanf("%d", &vetor[i]);    
    }
    
    // Procura o menor elemento do vetor
    int menor = vetor[0];
    for(i = 0; i < tamanho; i++)
    {
          if (vetor[i] < menor)
          {
                menor = vetor[i];
                posicao = i;
          }    
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    
    return 0;
}
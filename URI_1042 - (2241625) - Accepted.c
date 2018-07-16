#include <stdio.h>

int main()
{
    int vetor[3], i, a, b, c, j, aux;
    
    scanf("%d %d %d", &a, &b, &c);
    
    vetor[0] = a; vetor[1] = b; vetor[2] = c;
    
    // Ordenacao do vetor
   for (i = 1; i < 3; i++){
       aux = vetor[i];
       j = i - 1;
       while ((j >= 0) && (aux < vetor[j])) 
       {
             vetor[j+1] = vetor[j];
             j--;
       }
       vetor[j+1] = aux;
   }
    
    
    
    // Imprimir o vetor ordenado
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", vetor[i]);
    }

    printf("\n");
    
    // Imprimir o vetor anterior
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}

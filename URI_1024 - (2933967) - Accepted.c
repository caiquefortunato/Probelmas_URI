#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int entrada, tamanho, metade;
	int i, j, k, lololo;//, aux;
	char vetor[1001];
	char espaco, aux;
        
	scanf("%d", &entrada);
	//scanf("%c", &espaco);
	scanf("%d", &lololo);
        
	for(i = 0; i < entrada; i++)
	{
	        tamanho = 0, metade = 0;
	        //vetor = (char*)calloc(1000, sizeof(char));
	        
		//scanf("%[^\n]s", vetor);
		//gets(vetor);
		while(1)
		{
		        scanf("%c", &espaco);
		        
		        if(espaco == '\n') break;
		        vetor[tamanho] = espaco;
		        tamanho++;
		}
		
		//tamanho = strlen(vetor);
		metade = tamanho / 2;
                
                vetor[tamanho] = '\0';
                //printf("%s\n", vetor);
                // Etapa 1, soma 3 em todos a e z
		for(j = 0; j < tamanho; j++)
		{
			if ((vetor[j] >= 'A' && vetor[j] <= 'Z') || (vetor[j] >= 'a' && vetor[j] <= 'z'))
				vetor[j] = vetor[j] + 3;
		}
		
		// Etapa 2, inverte elementos do vetor
		for (j = 0; j < metade; j++) 
		{
                        k = tamanho - j -1;
                        aux = vetor[j];
                        vetor[j] = vetor[k];
                        vetor[k] = aux;
                 }
                 
                 // Etapa 3, diminui 1 da tabela na metade
                 for(j = metade; j < tamanho; j++)
                       vetor[j] = vetor[j] - 1;
		
		// Etapa final, imprime
		for(j = 0; j < tamanho; j++)
			printf("%c", vetor[j]);
			
		//puts("");
		printf("\n");
		
		
                
	} // fim dos casos de teste


        return 0;
}
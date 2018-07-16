#include <stdio.h>
#include <stdlib.h>
#define MAX 51

typedef struct Vetor
{
	int quant;
	int peso;
} Vetor;

int main()
{
	int testes;
	int i, j, k, l, c;
	int pacotes;

	scanf("%d", &testes);

	for(i = 0; i < testes; i++)
	{
	        //printf("oi\n");
		//pacotes = 0, quant = 0, peso = 0;
		pacotes = 0;

		scanf("%d", &pacotes);

		int matriz[MAX][pacotes];
		int leva[MAX][pacotes];

		// Preencho meu vetor de struct
                Vetor vetor[pacotes];

                for(k = 0; k < pacotes; k++)
                {       
                        //printf("for1\n");
                        scanf("%d %d", &vetor[k].quant, &vetor[k].peso);
                        //printf("%d %d\n", vetor[k].quant, vetor[k].peso);
                }
                //printf("1\n");
                
        

		// Zero minha matriz e a preencho a mao
		for(c = 0; c < pacotes; c++)
		{
       	    for(l = 0; l < MAX; l++)
			{
				if(c == 0 && (vetor[0].peso <= l))
				{
					matriz[l][c] = vetor[0].quant;
					leva[l][c] = 1;
				}
				else
				{
			        matriz[l][c] = 0;
			        leva[l][c] = 0;
				}
			}		
		}

		int conta = 0, recebe = 0;
		// Faz as contas e preenche toda a matriz
		for(c = 1; c < pacotes; c++)
		{
			for(l = 0; l < MAX; l++)
			{
				conta = l - vetor[c].peso;
				if(conta < 0)
				{
					matriz[l][c] = matriz[l][c - 1];
					leva[l][c] = 0;	
				}
				else if(conta >= 0)
				{
					recebe = matriz[conta][c-1] + vetor[c].quant;
					
					if(matriz[l][c-1] < recebe)
					{
						matriz[l][c] = recebe;
						leva[l][c] = 1;
					}
					else
					{
						matriz[l][c] = matriz[l][c - 1];
						leva[l][c] = 0;
					}
				}

			} // fim coluna
		} // fim linha
             
        int peso_total = 0, total_brin = 0, sobra = pacotes;   	
		// Caminhamento
		c = pacotes - 1;
		l = MAX - 1;
		while(c >= 0)
		{
		    if(leva[l][c] == 0)
		        c--;
		    
		    else if(leva[l][c] == 1)
		    {
		        sobra--;
		        total_brin = total_brin + vetor[c].quant;
		        peso_total = peso_total + vetor[c].peso;
		        l = l - vetor[c].peso;
		        c--;
		    }
	
		}
		
		printf("%d brinquedos\n", total_brin);
		printf("Peso: %d kg\n", peso_total);
		printf("sobra(m) %d pacote(s)\n", sobra); 

        printf("\n");
		
	} // fim dos casos de testes
	

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Lista
{
	char produto[50];
	double preco;
} Lista;

int main()
{
	int idas, quant_produtos, comprar, quant;
	char quero[50];
	int i = 0, j, k;
	double total;
	Lista lista[100];
	
	scanf("%d", &idas);
	
	while (i < idas)
	{ 		
			// Preenche a lista com os produtos existentes ---------------------
		total = 0.0;

		scanf("%d", &quant_produtos);
		
		for(j = 0; j < quant_produtos; j++)
			scanf("%s %lf", lista[j].produto, &lista[j].preco);
			
			// O que a tia vai comprar? ----------------------------------------
		scanf("%d", &comprar);
		
		for(j = 0; j < comprar; j++)
		{
			scanf("%s %d", quero, &quant);
			
			for(k = 0; k < quant_produtos; k++)
			{
				if (strcmp (quero, lista[k].produto) == 0)
					total = total + (quant * lista[k].preco);
			}
		}
		
		printf("R$ %.2lf\n", total);
		i ++;
	} // Fim dos casos
	
	return 0;
}
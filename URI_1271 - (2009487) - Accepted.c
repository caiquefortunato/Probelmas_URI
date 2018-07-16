#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_genoma, num_inversoes, inv1, inv2, total, quantidade;
	int f, i, j, k, aux, valor, preenche, flag, g = 1, vetor[50100];
	
	while (1)
	{
		scanf("%d", &num_genoma);
		if (num_genoma == 0)
		{
			break;
		}

		for (i = 1; i <= num_genoma; i++)
		{
			vetor[i] = i;
		}
		
		scanf ("%d", &num_inversoes);
		
		j = 1;
		while (j <= num_inversoes)          
		{
			if (num_inversoes == 0)
				break;
			
			scanf("%d %d", &inv1, &inv2);
			
			k = 0, aux = 0;
			
			total = ((inv2 - inv1) + 1) / 2;
			
			for (; k < total; k++)
			{
				aux = vetor[inv2];
				vetor[inv2] = vetor[inv1];
				vetor[inv1] = aux;
				inv1 += 1; inv2 -= 1;
			}
			
			j += 1;
		}
		
		printf("Genome %d\n", g); 
		g++;
		
		scanf("%d", &quantidade);
		
		for (i = 0; i < quantidade; i++)
		{
			scanf("%d", &valor);
			
			f = 1;
			while (vetor[f] != valor && f <= num_genoma)
			{
				f++;
			}
			
			printf("%d\n", f);
		}
	}
	return 0;
}
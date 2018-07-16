#include<stdio.h>
#include<string.h>

int main()
{
	char padrao[20], texto[60], espaco;
	int tam1, tam2, numero, cont, i, j, k, comp;
	
	while (scanf("%[^\n]s",padrao) != EOF)
	{
		scanf("%c",&espaco);
		scanf("%d",&numero);
		scanf("%c",&espaco);
		scanf("%[^\n]s",texto);
		scanf("%c",&espaco);
		
		tam1 = strlen(padrao);
		tam2 = strlen(texto);
		
		int flag = 0;
		// quando ela for = 0 nao achei <, mas se eu encontro, to dentro de uma >
		
		// ------------ padrao todo minusculo
		for(j = 0; j < tam1; j++)
		{
			if ((padrao[j] > 64) && (padrao[j] < 91))
				padrao[j] = padrao[j] - 'A' + 'a';
		}
		
		for (k = 0; k < tam2; k++)
		{
			if (texto[k] == '<')
			{
				flag = 1;
			}
			
			if (texto[k] == '>')
			{
				flag = 0;
			}
			
			cont = 0;
			if (flag == 0) // ela nao ta dentro do <>
			{
				printf("%c", texto[k]);
			}
			else
			{
				// Algoritmo por força bruta
					i = 0;
					while ( i < tam1)
					{
						if ((texto[k + i] >= 65) && (texto[k + i] <= 90))
						{
							// passar ele para minusculo
							if (texto[k + i] - 'A' + 'a' == padrao[i])
							{
								cont++;
							}
						}	
						
						else if (texto[k + i] == padrao[i])
						{
							cont++;
						}
						else 
						{
							break;
						}
						i++;
					} // fim do while
				
				if ( cont == tam1)
				{
					printf("%d",numero);
					k = ((k + tam1) - 1);
				}
				else
				{
					printf("%c",texto[k]);
				}
			}		
		} 
		printf("\n");
	}
	return 0;
}
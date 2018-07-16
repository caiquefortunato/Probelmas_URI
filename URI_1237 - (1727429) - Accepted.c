#include<stdio.h>
#include<string.h>

int main()
{
	char str1[60], str2[60];
	char aux;
	int matriz[60][60];
	int i, j, cont;

	while (scanf("%[^\n]s",str1) != EOF)
	{
		cont = 0;

		scanf("%c",&aux);
		scanf("%[^\n]s",str2);
		scanf("%c",&aux);

		// Zerar a matriz
		for (i = 0; i < 60; i++)
		{
			for (j = 0; j < 60; j++)
			{
				matriz[i][j] = 0;
			}
		}

		// Coloco o tamanho da palavras detro de variaveis para criar matriz
		int tam1, tam2;
		tam1 = strlen (str1);
		tam2 = strlen (str2);

		// Preencho a matriz
		for(i = 0; i < tam1; i++)
		{
			for (j = 0; j < tam2; j++)
			{
				if(str1[i] != str2[j])
				{
					matriz[i][j] = 0;
				}
				else
				{
					if (i == 0 || j == 0)
					{
						matriz[i][j] = 1; 
					}
					else 
					{
						matriz[i][j] = 1 + matriz[i-1][j-1];
					}
						if (matriz[i][j] > cont)
						{
							cont = matriz[i][j];
						}
				}
			} // Fim for j
		} // Fim do for i
	
	printf("%d",cont);
	printf("\n");

	}

	return 0;
}
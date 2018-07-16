#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
int main(){

	char texto[100], espaco, vetor2[] = "abcdefghijklmnopqrstuvwxyz";
	int alfabeto = 26, vetor[26], tam1;
	int i, j, k, l, m, flag, cont;

	while (1)
	{
		fgets(texto, 99, stdin);
		if (feof(stdin)) 
			break;
		tam1 = strlen(texto) - 1;
		flag = 0;

		// Zero o vetor auxiliar
		for(i = 0; i < alfabeto; i++)
		{
			vetor[i] = 0;
		}

		// colco o q a posicao do vetor que possui a letra
		for (j = 0; j < tam1; j++)
		{
			vetor[texto[j] - 'a'] = 1;
		}

		// Olho se realmente tem algo escrito no vetor
		if (texto[0] == '\0')
		{
			printf("\n");
		}
		else 
		{
			for (l = 0; l < alfabeto; l++)
			{
				if (vetor[l] == 1)
				{
					if (flag == 1)
						printf(", ");
					printf("%c:",vetor2[l]);
					while (vetor[l] == 1)
						l++;
					printf("%c",vetor2[l - 1]);
					flag = 1;
				}
			} // fim for 1
		} // Fim do else

		printf("\n");
	} // fim do while

	return 0;
}
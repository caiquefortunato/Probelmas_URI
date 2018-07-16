#include<stdio.h>
#include<stdlib.h>

int main()
{

	int matriz[50][50];//, visitados[50];
	int i, j, k, l, m, n;
	int start, vertices, arestas, testes, origem, destino, aux, aux2, cont;
	
	// -------------- Entradas
	scanf("%d", &testes);
	for(k = 0; k < testes; k++)
	{
		cont = 0;
		scanf("%d", &start);

		scanf("%d %d", &vertices, &arestas);

		// Zero a matriz
		for(i = 0; i < vertices; i++)
		{
			for(j = 0; j < vertices; j++)
			{
				matriz[i][j] = 0;
			}
		} // Fim do for de zerar
		
		// Leio os elementos da matriz
		for(l = 0; l < arestas; l++)
		{	
			scanf("%d %d", &origem, &destino);
			matriz[origem][destino] = 1;	
			matriz[destino][origem] = 1;
		} // Fim do for da leitura da matriz
		
		// Busca na matriz
		for(i = 0; i < vertices; i++)
   		{
        for(j = 0; j < vertices; j++)
       		{
       			if(matriz[i][j] == 1) cont++;
        	}
   		}
		
		//Imprimir a matriz 
		/*
		for(i = 0; i < vertices; i++)
   		{
        		for(j = 0; j < vertices; j++)
       			{
            			printf("%d ", matriz[i][j]);
        		}
        	printf("\n");
   		}
		*/
		
		printf("%d\n", cont);

	} // Fim do for de casos de testes

	return 0;
}
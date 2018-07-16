#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, resultado;
	  
    scanf("%d %d",&inicio, &fim);
	  
    resultado = 24 - inicio + fim;
	  
    if(resultado > 24)
	{
		resultado = abs(24 - (24 - inicio + fim));
	}
	
      printf("O JOGO DUROU %d HORA(S)\n", resultado);
}
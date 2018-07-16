#include <stdio.h>
#include <stdlib.h>
#include <math.h> // funcao modulo
#define TRUE 1 // :D While com true o/

typedef struct Rua
{
	int morador;
	//long long resultado;
	//int comercio;
} Rua;

int main()
{
	int habitantes, prox_negativo, comercio;
	long long resultado;
	int i, j;
	Rua *rua;
	
	while(TRUE)
	{
		scanf("%d", &habitantes);
		if(habitantes == 0)
			break;
		
		// Aloco memoria para a struc Rua a cada novo teste
		rua = (Rua*)malloc(sizeof(Rua)*habitantes+1);
		
		// Preencho o vetor com os dados 
        for(i = 0; i < habitantes; i++)
            scanf("%d", &rua[i].morador);
		
        // Zero minhas variaveis existentes em cada teste diferente
        	
		resultado = 0, prox_negativo = 0, comercio = 0, i = 0;
		// Analiso o vetor, para cada valor positivo procuro o proximo negativo
		while(i < habitantes)
        {
            if(rua[i].morador > 0)
            {
                for(j = prox_negativo; j < habitantes; j++)
                {
                    if(rua[j].morador < 0)
                    {
                        prox_negativo = j; // Atualizo o vetor para comecar do prim neg.
						// realiza a conta entre o positivo e negativo, que sera o comercio entre eles
                        comercio = rua[i].morador + rua[j].morador;
						// Se valores forem iguais, os dois viram 0, compra e venda iguais
						if(comercio == 0)
						{
							resultado = resultado + (abs(j - i) * rua[i].morador);
                            rua[i].morador = 0; rua[j].morador = 0;
						}
						// Se valor for positivo, vende tudo, vira 0, o comprador fica com o restante
                        else if(comercio > 0)
                        {
                            rua[i].morador = comercio;
                            resultado = resultado + ((abs(j - i) * rua[j].morador) * -1);
                            rua[j].morador = 0;
                        }
						// Se o valor for negativo, inverso do if anterior
                        else
                        {
                            rua[j].morador = comercio;
                            resultado = resultado + (abs(j - i) * rua[i].morador);
                            rua[i].morador = 0;
                            break;
                        }
                    }

                }
            } // se rua < 0
            i++;
        }
		
		printf("%lld\n", resultado);
		free(rua);
	}

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

// 1 = Alcool; 2 = Gasolina
// 3 = Diesel; 4 = Fim

int main()
{
    int comb;
    int gasolina, alcool, diesel;
    gasolina = 0, alcool = 0, diesel = 0;
    
    while(1)
    {
        scanf("%d", &comb);   
        
        if(comb >= 1 || comb <= 4)
        {
            // Condicao de parada
            if(comb == 4) 
            {
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n", alcool);
                printf("Gasolina: %d\n", gasolina);
                printf("Diesel: %d\n", diesel);
                break;
            }
            
            // se nao
            if(comb == 1) alcool += 1;
            if(comb == 2) gasolina += 1;
            if(comb == 3) diesel += 1;
        }
    
    }

    return 0;
}
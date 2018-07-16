#include <stdio.h>

int main()
{
    int entrada, maior, cont, pos;
    maior = 0, cont = 1, pos = 0;

    while(1)
    {
        if(cont == 101) break;

        scanf("%d", &entrada);

        if(entrada > maior)
        {
            maior = entrada;
            pos = cont;
        }
        cont++;
    }

    printf("%d\n%d\n", maior, pos);
    return 0;
}

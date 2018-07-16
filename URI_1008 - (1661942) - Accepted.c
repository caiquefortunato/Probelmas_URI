#include <stdio.h>
 
int main() {
 
    int funcionario, horas;
    double valor, salario;
    
    scanf("%d",&funcionario);
    scanf("%d",&horas);
    scanf("%lf",&valor);
    
    salario = horas * valor;
    
    printf("NUMBER = %d", funcionario);
    printf("\n");
    printf("SALARY = U$ %.2lf", salario);
    printf("\n");
 
    return 0;
}
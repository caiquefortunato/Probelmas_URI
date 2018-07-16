#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, MaiorAB, x;
    
    scanf("%d %d %d", &a, &b, &c);
    
    MaiorAB = ((a + b + abs(a-b)) / 2);
    
    x = MaiorAB;
    MaiorAB = 0;
    
    MaiorAB = ((x + c + abs(x - c)) / 2);
    
    printf("%d eh o maior\n", MaiorAB);
    
    return 0;
}
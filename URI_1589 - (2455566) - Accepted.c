#include <stdio.h>
  
int main() {
  
    int casos, i, r1, r2, result;
    scanf("%d", &casos);
    if (casos > 10000) return 0;
     
    for(i = 0; i < casos; i++)
    {
       scanf("%d %d", &r1, &r2);
       result = r1 + r2;
       printf("%d\n", result);
    }
    
    return 0;
}
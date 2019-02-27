#include <bits/stdc++.h>

using namespace std; 

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int q_entrada;
    float valor, media, v1, v2, v3;
    cin >> q_entrada;
    
    for(int i = 0; i < q_entrada; i++)
    {
        media = valor = 0;
        cin >> v1 >> v2 >> v3;
        //media = (v1 * 2 + v2 *3 + v3 * 5) / 10;
        
        printf("%.1lf\n", (v1 * 2 + v2 *3 + v3 * 5) / 10);
    }
}

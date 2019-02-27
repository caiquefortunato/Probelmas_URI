#include <bits/stdc++.h>

using namespace std; 

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    float nota = 0, media = 0;
    int nota_valida = 0;
    
    while(nota_valida < 2)
    {
        cin >> nota;    
        if(nota >= 0 and nota <= 10) 
        { 
            nota_valida += 1; 
            media += nota; 
        }
        else cout << "nota invalida" << endl;
    }
    
    cout << "media = " << media/2 << endl;
}

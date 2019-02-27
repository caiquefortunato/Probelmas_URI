// Example program
#include <bits/stdc++.h>

using namespace std; 

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int input = 0;
    
    while(input != 2002)
    {
        cin >> input;    
        if(input == 2002) cout << "Acesso Permitido" << endl;
        else cout << "Senha Invalida" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    int n, j, cont;
    string input;
    stack<char> pilha;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        while(!pilha.empty()) pilha.pop();
        cont = j = 0;
        
        cin >> input;
        
        while(true)
        {
            if(input[j] == '\0') break;
            if(input[j] == '<')  pilha.push('<');
            if(input[j] == '>')
            {
                if(!pilha.empty()) 
                {
                    pilha.pop();
                    cont+=1;
                }
            }
            j++;
        }
        cout << cont << endl;
    }
    
    return 0;
}

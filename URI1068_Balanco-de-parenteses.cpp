#include <bits/stdc++.h>
using namespace std;

int main(){
    //std::ios_base::sync_with_stdio(false);
    int n, j, cont;
    char tmp[1001];
    string input;
    stack<char> pilha;
    
    while(scanf("%s", tmp) != EOF)
    {
        input = tmp;
        
        while(!pilha.empty()) pilha.pop();
        cont = j = 0;
        
        while(true)
        {
            if(input[j] == '\0') break;
            if(input[j] == '(')  pilha.push('<');
            if(input[j] == ')')
            {
                if(!pilha.empty()) 
                {
                    pilha.pop();
                    cont+=1;
                }
                else 
                {
                    pilha.push('<');
                    break;
                }
            }
            j++;
        }
        
        if(pilha.empty()) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    
    return 0;
}
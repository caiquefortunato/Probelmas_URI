#include <bits/stdc++.h>
#define MAX 9999

using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	string linha, resultado;
	char digito;
	int j;
	bool flag = true;
	
	while(cin >> digito >> linha and digito != '0') {
		j = 0, flag = true;
		int o = 0;

		for(int i = 0; i < linha.size(); i++) {
			if(linha[i] != digito) {
				if(flag and linha[i] != '0') {
					flag = false;
				}
				if(not flag) {
					resultado[o++] = linha[i];
					j++;
				}
			}
		}
		
		if(flag) {
			resultado[o++] = '0';
			j++;
		}
		
		for(int i = 0; i < j; i++)
			cout << resultado[i];
		cout << endl;
		
	}

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	
	while(scanf("%d %d %d",&a,&b,&c) == 3) {
		
		if (a == b && b == c) cout << "*\n";
		else if((a > b && a > c) || (a < b && a < c)) cout << "A\n";
		else if((b > a && b > c) || (b < a && b < c)) cout << "B\n";
		else if((c > a && c > b) || (c < a && c < b)) cout << "C\n";
		
	}
	
	return 0;
}

#include <bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	
	double raio, area;
	
	cin >> raio;

	area = PI*pow(raio, 2);

	cout << fixed;
    cout.precision(4);
    cout << "A=" << area << endl;
	
	return 0;
}

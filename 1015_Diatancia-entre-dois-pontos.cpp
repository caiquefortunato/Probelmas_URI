#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	
	double x1, x2, y1, y2, dist;
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	cout << fixed;
    cout.precision(4);
    cout << dist << endl;
	
	return 0;
}

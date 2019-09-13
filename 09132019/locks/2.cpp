#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int n,t=0;
	string a,b;
	cin >> n >> a >> b;
	for(int x = 0; x < n; x++) {
		char c1 = a[x];
		int i1 = c1 - 48;
		char c2 = b[x];
		int i2 = c2 - 48;
		int d = abs(i1 - i2);
		if(d > 5) d = abs(d - 10);
		t += abs(d);
	}
	cout << t << endl;
}

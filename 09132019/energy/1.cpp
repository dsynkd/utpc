#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float e,n,c=0;
	cin >> e >> n;
	while(n-->0) {
		int i;
		cin >> i;
		c += i;
	}
	cout << ceil(c/e) << endl;
}

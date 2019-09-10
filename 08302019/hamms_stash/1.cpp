#include <iostream>
using namespace std;

int main(){
	int n, c = 0, i;
	cin >> n;
	while(n-->0) {
		cin >> i;
		c += i;
	}
	cout << c << endl;
}

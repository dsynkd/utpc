#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string tmp;
	cin >> tmp;
	int D=0,B=0;
	for(char& c: tmp) {
		if(c == 'D') D++;
		if(c == 'B') B++;
	}
	cout << (D > B ? "D" : "B") << endl;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int f,t;
	cin >> f >> t;
	vector<int> d;
	while(f-->0) {
		int di;
		cin >> di;
		d.push_back(di);
	}
	sort(d.begin(), d.end());
	int c=0,n=0;
	for(int i = d.size()-1; i >= 0; i--) {
		n++;
		c += d[i];
		if(c >= t) {
			cout << n << endl;
			return 0;
		}
	}
	cout << -1;
}

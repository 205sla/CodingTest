#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,a, x, count=0;
	vector<int> v(1000001, 0);
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a;
		v[a] = 1;
	}
	cin >> x;
	for (int i = 0; i < x / 2 + x%2;i++) {
		if (x - i < 1000001) {
			if (v[i] && v[x - i]) {
				count += 1;
			}
		}
		
	}
	cout << count;

}


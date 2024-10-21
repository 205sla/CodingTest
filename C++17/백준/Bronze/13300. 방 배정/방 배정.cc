#include <bits/stdc++.h>
using namespace std;



int main() {
	int n, max_c, a, b, count = 0;
	int v[12] = { 0 };
	cin >> n >> max_c;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;
		v[b * 2 + a - 2] += 1;;
	}
	for (auto e : v) {
		count += e / max_c + ((e % max_c) ? 1 : 0);
	}
	cout << count;


}


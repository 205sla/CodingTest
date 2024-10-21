#include <bits/stdc++.h>
using namespace std;


int main() {

	int a, b, c, x, v[10] = { 0 };
	cin >> a >> b >> c;
	x = a * b * c;

	while (x) {
		v[x % 10] += 1;
		x /= 10;
	}
	for (auto e : v) {
		cout << e << "\n";
	}
}


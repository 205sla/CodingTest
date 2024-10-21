#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int v[26] = { 0 };
	cin >> s;
	for (auto e : s) {
		v[e - 'a'] += 1;
	}

	for (auto e : v) {
		cout << e << " ";
	}
}
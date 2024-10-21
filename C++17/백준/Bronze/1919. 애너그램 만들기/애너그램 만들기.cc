#include <bits/stdc++.h>
using namespace std;



int main() {
	int count=0;
	string s1, s2;
	
	int v1[26] = { 0 }, v2[26] = { 0 };
	cin >> s1 >> s2;
	for (auto e : s1) {
		v1[e - 'a'] += 1;
	}
	for (auto e : s2) {
		v2[e - 'a'] += 1;
	}
	for (int j = 0; j < 26;j++) {
		count += v1[j] > v2[j] ? v1[j] - v2[j] : v2[j] - v1[j];
	}
	cout << count;
}


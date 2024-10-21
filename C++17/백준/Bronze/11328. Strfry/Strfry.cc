#include <bits/stdc++.h>
using namespace std;



int main() {
	int n;
	string s1, s2;
	
	cin >> n;
	for (int i = 0; i < n;i++) {
		int v1[26] = { 0 }, v2[26] = { 0 };
		cin >> s1 >> s2;
		for (auto e : s1) {
			v1[e - 'a'] += 1;
		}
		for (auto e : s2) {
			v2[e - 'a'] += 1;
		}
		bool can = true;
		for (int j = 0; j < 26;j++) {
			if (v1[j] != v2[j]) {
				can = false;
				break;
			}
		}
		cout << (can ? "Possible" : "Impossible") << "\n";
	}
	


}


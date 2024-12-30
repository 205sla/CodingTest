#include <bits/stdc++.h>
using namespace std;

//205.kr



int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	vector<int> v(30);
	for (int i = 0;i < 26;i++) {
		v[i] = -1;
	}

	string s;
	int n = 0;
	cin >> s;
	for (char c : s) {
		if (v[c - 'a'] == -1) {
			v[c - 'a'] = n;
		}
		n++;
	}
	for (int i = 0;i < 26;i++) {
		cout << v[i] << ' ';
	}

}
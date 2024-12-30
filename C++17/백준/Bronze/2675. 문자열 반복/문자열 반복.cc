#include <bits/stdc++.h>
using namespace std;

//205.kr



int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		string s;
		int a;
		cin >> a;
		cin >> s;
		for (char c : s) {
			for (int j = 0;j < a;j++) {
				cout << c;
			}
		}
		cout << "\n";
	}

}
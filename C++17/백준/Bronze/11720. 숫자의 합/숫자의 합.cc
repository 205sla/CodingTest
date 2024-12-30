#include <bits/stdc++.h>
using namespace std;

//205.kr



int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n, sum = 0;
	string s;
	cin >> n;
	cin >> s;
	for (char c : s) {
		sum += c - '0';
	}
	cout << sum;

}
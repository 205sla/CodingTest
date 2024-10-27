#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;


	string s;
	queue<int> Q;

	cin >> n;

	for (int i = 0;i < n;i++) {
		Q.push(i + 1);
	}
	while (Q.size() > 1) {
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	cout << Q.front();

}
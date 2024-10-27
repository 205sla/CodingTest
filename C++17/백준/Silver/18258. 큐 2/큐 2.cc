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
		cin >> s;
		if (s == "push") {
			cin >> a;
			Q.push(a);
		}else if (s == "pop") {
			if (Q.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.front() << "\n";
				Q.pop();
			}
		}else if (s == "size") {
			cout << Q.size() << "\n";
		}else if (s == "empty") {
			cout << !Q.size() << "\n";
		}else if (s == "front") {
			if (Q.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.front() << "\n";

			}
		}else if (s == "back") {
			if (Q.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.back() << "\n";

			}
		}
	}

}
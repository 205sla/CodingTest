#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
	int n, a;


	string s;
	queue<int> Q;

	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> s;
		if (s == "push") {
			cin >> a;
			Q.push(a);
		}
		if (s == "pop") {
			if (Q.size() == 0) {
				cout << -1 << endl;
			}
			else
			{
				cout << Q.front() << endl;
				Q.pop();
			}
		}
		if (s == "size") {
			cout << Q.size() << endl;
		}
		if (s == "empty") {
			cout << !Q.size() << endl;
		}
		if (s == "front") {
			if (Q.size() == 0) {
				cout << -1 << endl;
			}
			else
			{
				cout << Q.front() << endl;

			}
		}
		if (s == "back") {
			if (Q.size() == 0) {
				cout << -1 << endl;
			}
			else
			{
				cout << Q.back() << endl;

			}
		}
	}

}
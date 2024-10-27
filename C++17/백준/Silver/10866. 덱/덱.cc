#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;


	string s;
	deque<int> D;

	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> a;
			D.push_front(a);
		}
		if (s == "push_back") {
			cin >> a;
			D.push_back(a);
		}
		if (s == "pop_front") {
			if (D.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << D.front() << "\n";
				D.pop_front();
			}
		}
		if (s == "pop_back") {
			if (D.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << D.back() << "\n";
				D.pop_back();
			}
		}
		if (s == "size") {
			cout << D.size() << "\n";
		}
		if (s == "empty") {
			cout << !D.size() << "\n";
		}
		if (s == "front") {
			if (D.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << D.front() << "\n";

			}
		}
		if (s == "back") {
			if (D.size() == 0) {
				cout << -1 << "\n";
			}
			else
			{
				cout << D.back() << "\n";

			}
		}
	}

}
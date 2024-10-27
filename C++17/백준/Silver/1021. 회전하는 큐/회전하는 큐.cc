#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, count=0,countAdd;


	string s;
	deque<int> D;

	cin >> n;

	for (int i = 0;i < n;i++) {
		D.push_back(i + 1);
	}
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> a;
		countAdd = 0;
		while (D.front() != a) {
			countAdd++;
			D.push_back(D.front());
			D.pop_front();
		}
		count += countAdd < D.size() - countAdd ? countAdd : D.size() - countAdd;
		D.pop_front();
	}
	cout << count;


}
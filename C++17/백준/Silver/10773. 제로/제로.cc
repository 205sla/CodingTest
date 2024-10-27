#include <bits/stdc++.h>
using namespace std;


int main() {
	stack<int> stk;
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t == 0) {
			stk.pop();
		}
		else
		{
			stk.push(t);
		}
	}
	int sum = 0;
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum;

}
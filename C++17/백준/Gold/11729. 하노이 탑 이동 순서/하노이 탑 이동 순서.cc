#include <bits/stdc++.h>
using namespace std;

//205.kr
int n;
void func1(int a, int b, int c) {
	if (c == 1) {
		cout << a << ' ' << b << "\n";
		return;
	}
	func1(a, 6 - a - b, c-1);
	cout << a << ' ' << b << "\n";
	func1(6 - a - b, b, c - 1);
	
}



int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	func1(1, 3,n);
}
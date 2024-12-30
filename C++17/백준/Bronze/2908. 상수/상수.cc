#include <bits/stdc++.h>
using namespace std;

//205.kr

int func(int n) {
	int newN = 0;
	while (n) {
		newN *= 10;
		newN += n % 10;
		n /= 10;
	}
	return newN;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int a1, a2;
	cin >> a1 >> a2;

	a1 = func(a1);
	a2 = func(a2);
	cout << max(a1, a2);
}
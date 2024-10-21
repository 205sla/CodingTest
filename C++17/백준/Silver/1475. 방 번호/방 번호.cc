#include <bits/stdc++.h>
using namespace std;


int main() {
	int x, v[10] = { 0 }, max=0, six_nine;
	cin >> x;
	while (x) {
		v[x % 10] += 1;
		x /= 10;
	}
	for (int i = 0;i < 10;i++) {

		if (i != 6 && i != 9) {
			max = max > v[i] ? max : v[i];
		}
	}
	six_nine = v[6] + v[9];
	if (six_nine / 2 + six_nine % 2 < max) {
		cout << max;
	}
	else
	{
		cout << six_nine / 2 + six_nine % 2;
	}

}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
using namespace std;


vector<vector<int>> vv;

void C(int,int,int,int);
bool Check(int, int, int, int);
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> v;
		string a;
		cin >> a;
		for (auto e : a) {
			v.push_back(e-'0');
		}
		vv.push_back(v);
	}
	C(0, 0, n, n);

}

void C(int x1, int y1, int x2, int y2 ) {
	if (x1 == x2) {
		cout << vv[x1][y1];
	}
	else {
		if (Check(x1, y1, x2, y2)) {
			cout << vv[x1][y1];
		}
		else {
			int size = x2 - x1;
			cout << "(";
			C(x1, y1, x1 + size / 2, y1 + size / 2);
			C(x1, y1+ size / 2, x1 + size / 2, y1 + size);
			C(x1 + size / 2, y1, x1 + size, y1 + size / 2);
			C(x1 + size / 2, y1+ size / 2, x1 + size, y1 + size);
			cout << ")";

		}
	}
}

bool Check(int x1, int y1, int x2, int y2) {
	int num = vv[x1][y1];
	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			if (num != vv[i][j]) {
				return false;
			}
		}
	}
	return true;
}


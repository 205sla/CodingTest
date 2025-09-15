#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int main() {
	int a, b, c, num = 0;
	cin >> a >> b >> c;

	if (a > b && a > c) {
		cout << (b > c ? b : c);
	}
	else if (b > a && b > c) {
		cout << (a > c ? a : c);
	}
	else {
		cout << (b > a ? b : a);
	}

}

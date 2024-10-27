#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n,a;
	string str;
	cin >> n;

	bool b = true;

	for (int i = 0;i < n;i++) {
		cin >> str;
		b = true;
		a = 0;
		for (auto e : str) {
			if (e == '(') {
				a++;
			}
			else
			{
				a--;
				if (a < 0) {
					b = false;
					break;
				}
			}
		}
		if (b && a==0) {
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
#include <bits/stdc++.h>
using namespace std;


int main() {
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> s;
		list<char> c;
		auto p = c.begin();
		for (char e : s) {
			if (e == '<') {
				if (p != c.begin()) {
					p--;
				}
			}else if (e == '>') {
				if (p != c.end()) {
					p++;
				}
			}
			else if (e == '-') {
				if (p != c.begin()) {
					auto temp = p;
					c.erase(--temp);
				}
			}
			else
			{
				c.insert(p, e);
			}

		}
		for (auto e : c) {
			cout << e;
		}
		cout << "\n";


	}


}
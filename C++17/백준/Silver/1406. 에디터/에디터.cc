#include <bits/stdc++.h>
using namespace std;


int main() {
	list<char> L;
	int n;
	string s;
	char c;
	cin >> s >> n;
	for (auto e : s) {
		L.push_back(e);
	}
	list<char>::iterator frontIter = L.begin();
	for (int j = 0; j< L.size();j++) {
		frontIter++;
	}
	for (int i = 0; i < n;i++) {
		cin >> s;
		if (s == "L") {
			if (L.begin()!= frontIter) {
				frontIter--;
			}
			
		}
		if (s == "D") {
			if (L.end() != frontIter) {
				frontIter++;
			}
		}
		if (s == "B") {
			if (L.begin() != frontIter) {
				list<char>::iterator a = frontIter;
				L.erase(--a);
			}
			
		}
		if (s == "P") {
			cin >> c;
			list<char>::iterator a = frontIter;
			L.insert(a, c);
		}/*
		for (auto e : L) {
			cout << e;
		}
		cout << "\n\n";*/
	}
	for (auto e : L) {
		cout << e;
	}


}
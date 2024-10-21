#include <bits/stdc++.h>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	list<int> main, answer;
	for (int i = 0; i < a;i++) {
		main.push_back(i + 1);
	}
	auto p = main.begin();
	for (int j = 0;j < a;j++) {
		for (int i = 0; i < b;i++) {
			
			if (p == main.end()) {
				p = main.begin();
			}
			p++;
		}
		auto temp = p;
		answer.push_back(*--temp);		
		main.erase(temp);

	}
	
	auto pp = answer.begin();
	cout << "<";
	for (int i = 0;i < answer.size() - 1;i++) {
		cout << *pp++ << ", ";
	}
	cout << *pp << ">";
}
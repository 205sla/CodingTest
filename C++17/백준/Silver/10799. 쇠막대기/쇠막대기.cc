#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count = 0, CountAdd = 0;
	char last = ' ';
	string str;
	cin >> str;
	for (char e : str) {
		if (e == '(') {
			CountAdd++;
			last = '(';
		}
		else
		{
			
			if (last == '(') {
				//레이저
				CountAdd--;
				count += CountAdd;
			}
			else
			{		
				count++;
				CountAdd--;
			}
			last = ')';
		}
	}


	cout << count;
}
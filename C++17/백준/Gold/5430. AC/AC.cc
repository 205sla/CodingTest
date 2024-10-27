#include <bits/stdc++.h>
using namespace std;

//205.kr

deque<int> parseArray(const string& str) {
	deque<int> result;
	stringstream ss(str.substr(1, str.size() - 2)); // "["와 "]"를 제거
	string item;

	while (getline(ss, item, ',')) {
		result.push_back(stoi(item)); // 문자열을 정수로 변환
	}

	return result;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, nn;
	string s, sL;
	

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> s;
		cin >> nn;
		cin >> sL;
		bool Rvs = false;
		bool err = false;
		deque<int> D = parseArray(sL);
		
		for (char e : s) {
			if (e == 'R') {
				Rvs = !Rvs;
			}
			else if (e == 'D')
			{
				if (D.empty()) {
					cout << "error\n";
					err = true;
					break;
				}
				else
				{
					if (!Rvs) {
						D.pop_front();
					}
					else
					{
						D.pop_back();
					}
				}
			}
		}
		if (!err) {
			if (D.size() == 0) {
				cout << "[]\n";
			}
			else
			{
				if (!Rvs) {
					cout << "[";
					for (int j = 0; 1 < D.size();j++) {
						cout << D.front() << ",";
						
						D.pop_front();
					}
					cout << D.front() << "]\n";
				}
				else
				{
					cout << "[";
					for (int j = 0; 1 < D.size();j++) {
						cout << D.back() << ",";
						D.pop_back();
					}
					cout << D.back() << "]\n";
				}

			}
		}
		
		


	}
	
}
#include <bits/stdc++.h>
using namespace std;

//205.kr

int L, C;
vector<char> num;
char arr[20];
int isused[20];

void func1(int cur, int maxNum) {
	if (cur == L) {
		int cnt = 0;
		for (int i = 0; i < L;i++) {
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
				cnt++;
			}
		}
		if (cnt >= 1 && L - cnt >= 2) {
			for (int i = 0; i < L;i++) {
				cout << arr[i];
			}
			cout << '\n';
		}
		return;
	}

	for (int i = maxNum; i < C;i++) {
		if (!isused[i]) {
			isused[i] = 1;
			arr[cur] = num[i];
			func1(cur + 1, i + 1);
			isused[i] = 0;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> L >> C;
	for (int i = 0; i < C;i++) {
		char temp;
		cin >> temp;
		num.push_back(temp);
	}
	sort(num.begin(), num.end());
	func1(0, 0);


}
#include <bits/stdc++.h>
using namespace std;

//205.kr
int n, m = 6, input[20];
int arr[10];
vector<int> L;
bool isused[20];
void func1(int cur, int MaxNum) {
	if (cur == m) {
		for (int i = 0; i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = MaxNum; i < n;i++) {

		if (!isused[i]) {
			isused[i] = 1;
			arr[cur] = input[i];
			func1(cur + 1, i + 1);
			isused[i] = 0;
		}

	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> input[i];

		func1(0, 0);
		cout << '\n';
	}

}
#include <bits/stdc++.h>
using namespace std;

//205.kr
int n, m;
int arr[10];
vector<int> L;
bool isused[10];
void func1(int cur, int 최대) {
	if (cur == m) {
		for (int i = 0; i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 최대; i < n;i++) {
		if (!isused[i]) {
			arr[cur] = L[i];
			isused[i] = 1;
			func1(cur + 1, i);
			isused[i] = 0;

		}



	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n >> m;
	for (int i = 0; i < n;i++) {
		int temp;
		cin >> temp;
		L.push_back(temp);
	}

	sort(L.begin(), L.end());
	func1(0,0);
}
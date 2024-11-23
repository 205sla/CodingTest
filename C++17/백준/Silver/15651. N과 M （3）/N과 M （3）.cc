#include <bits/stdc++.h>
using namespace std;

//205.kr
int n, m;
int arr[10];
bool isused[10];
void func1(int cur) {
	if (cur == m) {
		for (int i = 0; i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n;i++) {
		
			arr[cur] = i;
			func1(cur + 1);

		
	}
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n >> m;
	func1(0);



}
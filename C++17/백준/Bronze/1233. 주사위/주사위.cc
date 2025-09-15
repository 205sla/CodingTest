#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int main() {
	int a, b, c, maxCount = 0, num;
	cin >> a >> b >> c;

	int arr[81] = { 0 ,};

	for(int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				int sum = i + j + k;
				arr[sum]++;
				
				if (arr[sum] > maxCount) {
					maxCount = arr[sum];
					num = sum;
				}
			}
		}
	}

	cout << num << endl;
	return 0;

}

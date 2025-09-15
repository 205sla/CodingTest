#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>


int main() {
	int a;
	long long sum = 0;;
	long long arr[10000];
	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> arr[i];
	}

	for(int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			sum += abs(arr[i] - arr[j]);	
		}
	}
	cout << sum << endl;	
	
	
}
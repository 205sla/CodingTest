#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

int rev(int n);

int main() {
	int a, b, maxNum=0;
	cin >> a >> b;
	
	for(int i=1; i<=b; i++) {
		if(rev(a*i) > maxNum) {
			maxNum = rev(a*i);
		}
	}

	cout << maxNum << endl;

	
}
int rev(int n) {
	int newN = 0;
	while(n) {
		newN = newN*10 + n%10;
		n /= 10;
	}
	return newN;
}
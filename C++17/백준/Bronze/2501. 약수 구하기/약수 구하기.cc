#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int main() {
	int a, b;
	cin >> a >> b;
	
	for (int i=1; i<=a; i++) {
		if (a%i==0) {
			b--;
			if(!b) {
				cout << i << endl;
				return 0;
			}
		}
	}


	cout << 0 << endl;
}

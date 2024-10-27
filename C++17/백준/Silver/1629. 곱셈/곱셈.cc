#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <numeric>
using namespace std;

long long int f(long long int count);
long long int a, b, c;
int main() {
	
	cin >> a;
	cin >> b;
	cin >> c;

	cout << f(b);
	
}

long long int f(long long int count) {
	if (count == 1) {
		return a % c;
	}
	if (count % 2 == 0) {
		return ((f(count / 2) % c) * f(count / 2) % c) % c;


	}
	if(count % 2 == 1){
		return ((f(count / 2) % c) * f(count / 2 +1) % c) % c;
	}
	return 0;

}

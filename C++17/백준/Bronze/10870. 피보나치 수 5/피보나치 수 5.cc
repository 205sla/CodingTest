#include <iostream>
using namespace std;
#include <string>
#include <vector>

int Fibonacci(int);

int main() {
	int num;
	cin >> num;
	cout << Fibonacci(num);
}
int Fibonacci(int f) {
	if (f == 0) {
		return 0;
	}
	else if (f == 1) {
		return 1;
	}
	else
	{
		return Fibonacci(f - 1) + Fibonacci(f - 2);
	}
}
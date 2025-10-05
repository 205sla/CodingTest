#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input, n=2;
    cin >> input;

    while (input!=1)
    {
        if (input % n == 0) {
            input /= n;
            cout << n << "\n";
        }
        else
        {
            n++;
        }
    }
   
}

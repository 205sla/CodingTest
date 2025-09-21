#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> g(n);
    long long sum = 0, nnn = 1;
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
        sum += g[i];
        nnn *= 3; 
    }

    
    vector<char> s(sum + 1, 0);

    for (long long i = 0; i < nnn; ++i) {
        long long test = 0, testN = i;
        for (int j = 0; j < n; ++j) {
            int r = (int)(testN % 3);
            if (r == 0)      test += g[j];
            else if (r == 1) test -= g[j];
            testN /= 3;
        }
        if (0 <= test) {
            s[(size_t)test] = 1;
        }
    }

    int count = 0;
    for (long long i = 1; i <= sum; ++i)
        if (!s[(size_t)i]) ++count;

    cout << count;
}

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;
    vector<long long> v(k);
    long long maxL = 0;
    for (int i = 0; i < k; ++i) {
        cin >> v[i];
        maxL = max(maxL, v[i]);      
    }

    long long MinL = 1;
    while (MinL < maxL) {
        long long midL = (MinL + maxL + 1) / 2;
        long long countL = 0;
        for (auto e : v) countL += (e / midL);

        if (countL >= n) {
            MinL = midL;
        }
        else {
            maxL = midL - 1;
        }
    }
    cout << MinL << '\n';
    return 0;
}
   




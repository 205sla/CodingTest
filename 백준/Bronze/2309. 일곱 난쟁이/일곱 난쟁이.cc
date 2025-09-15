#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int main() {
    vector<int> v;
    int h,sum=0;
    bool f = false;
    for (int i = 0; i < 9; i++) {
        cin >> h;
        sum += h;
        v.push_back(h);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < 9; i++) {
        if (f) {
            break;
        }
        for (int j = 0; j < i; j++) {
            if (v[i] + v[j] == sum - 100) {
                f = true;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << v[k] << endl;
                    }
                }
                break;
            }
        }
    }
    
}

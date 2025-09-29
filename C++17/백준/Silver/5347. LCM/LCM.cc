#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>


int GCD(int x,int y);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    long long N, x,y;
    cin >> N;
    for (int i = 0; i < N;i++) {
        cin >> x>>y;
        cout << x/ GCD(max(x, y), min(x, y)) * y <<"\n";
    }
    

    

}

int GCD(int x, int y) {
    if (x % y == 0) return y;
    return GCD(y, x % y);
}


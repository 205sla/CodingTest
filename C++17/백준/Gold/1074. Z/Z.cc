#include <bits/stdc++.h>
using namespace std;

// 205.kr

int func1(int size, int x, int y) {
    if (size == 0) {
        return 0;
    }

    int half = 1 << (size - 1); 

    if (x < half && y < half) {
        return func1(size - 1, x, y);
    }
    if (x < half && y >= half) {
        return half* half+func1(size - 1, x, y-half);
    }
    if (x >= half && y < half) {
        return 2 * half * half +func1(size - 1, x - half, y);
    }
    return 3 * half * half +func1(size - 1, x - half, y- half);
    

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inpt, r, c;
    cin >> inpt >> r >> c; 
    cout<< func1(inpt, r, c); 
}

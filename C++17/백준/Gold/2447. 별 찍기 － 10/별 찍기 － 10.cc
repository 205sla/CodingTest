#include <bits/stdc++.h>
using namespace std;

// 205.kr

int v[2188][2188];
void func1(int x, int y, int size) {
    if (size == 1) {
        v[x][y] = 1;
        return;
    }

    int s1 = size / 3;
    int s2 = size / 3 *2;
    func1(x, y, s1);
    func1(x+s1, y, s1);
    func1(x+s2, y, s1);
    func1(x, y + s1, s1);
    func1(x + s2, y + s1, s1);
    func1(x, y + s2, s1);
    func1(x + s1, y + s2, s1);
    func1(x + s2, y + s2, s1);
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inpt;
    cin >> inpt;
    
    func1(0,0,inpt);

    for (int i = 0; i < inpt;i++) {
        for (int j = 0; j < inpt;j++) {
            if (v[i][j]) {
                cout <<'*';
            }
            else
            {

                cout << ' ';
            }
           
        }
        cout << '\n';
    }  

}

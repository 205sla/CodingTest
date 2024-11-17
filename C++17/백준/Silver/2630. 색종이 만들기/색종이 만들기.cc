#include <bits/stdc++.h>
using namespace std;

// 205.kr
int paper[130][130];
int Y = 0, B = 0;
int func1(int x, int y, int size) {
    if (size == 1) {
        if (paper[x][y] == 1) {
            Y++;
        }
        else if (paper[x][y] == 0)
        {
            B++;
        }
        return paper[x][y];
    }
    int temp1 = paper[x][y];
    bool IsSame = true;

    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (paper[i][j] != temp1) {
                IsSame = false;
                break;
            }
        }
        if (!IsSame) break;
    }

    if (IsSame) {
        if (temp1 == 1) {
            Y++;
        }
        else {
            B++;
        }
    }
    else {
        int half = size / 2;
        func1(x, y, half);
        func1(x + half, y, half);
        func1(x, y + half, half);
        func1(x + half, y + half, half);
    }

    return -1;

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp, N;
    cin >> N;
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < N;j++) {

            cin >> temp;
            paper[i][j] = temp;
        }
    }
    func1(0, 0, N);

    cout << B << '\n' << Y;

}

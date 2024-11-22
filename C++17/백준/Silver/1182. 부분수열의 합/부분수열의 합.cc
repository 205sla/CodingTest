#include <bits/stdc++.h>
using namespace std;

// 205.kr
int N,NN,  S, cnt=0;
int isused[20];
int L[20];
void func1(int cur, int sum) {
    if (N == cur) {
        if (sum == S) {
            cnt++;
        }
        return;
    }
    func1(cur + 1, sum);
    func1(cur + 1, sum+ L[cur]);
  
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N>>S;

    for (int i = 0; i < N;i++) {
        cin >> L[i];
    }
    func1(0,0);
    if (S == 0) {
        cnt--;
    }
    
    cout << cnt;

}

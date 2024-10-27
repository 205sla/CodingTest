#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, count=0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        stack<int> Stk;
        for (char e : str) {
            if (e == 'A') {
                if(!Stk.empty()&& Stk.top()=='A') {
                    Stk.pop();
                }
                else
                {
                    Stk.push('A');
                }
            }
           
            if (e == 'B') {
                if (!Stk.empty() && Stk.top() == 'B') {
                    Stk.pop();
                }
                else
                {
                    Stk.push('B');
                }
            }
        }
        if (Stk.empty()) {
            count++;
        }

    }
    cout << count;
}
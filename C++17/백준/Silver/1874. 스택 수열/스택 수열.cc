#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk; // 스택 선언
    vector<char> operations; // 연산 기록
    int n, t, addNum = 1; // n: 전체 수, t: 현재 출력할 수, addNum: 스택에 추가할 수
    cin >> n; // n 입력

    for (int i = 0; i < n; i++) {
        cin >> t; // 수열의 다음 수 입력
        while (true) {
            // 현재 스택의 top과 t가 일치하지 않는 경우
            if (stk.empty() || stk.top() != t) {
                // 더 이상 추가할 수가 없는 경우
                if (addNum > n) {
                    cout << "NO\n"; // 불가능한 경우
                    return 0;
                }
                // 스택에 수를 추가하고 연산 기록
                stk.push(addNum++);
                operations.push_back('+');
            } 
            // 현재 스택의 top과 t가 일치하는 경우
            else {
                stk.pop(); // pop 연산 수행
                operations.push_back('-'); // 연산 기록
                break; // 다음 수로 진행
            }
        }
    }

    for (char e : operations) {
        cout << e << "\n";
    }

    return 0;
}

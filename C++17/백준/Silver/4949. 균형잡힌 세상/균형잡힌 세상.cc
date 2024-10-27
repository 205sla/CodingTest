#include <bits/stdc++.h>
using namespace std;

//205.kr

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        string input;
        getline(cin, input);

        if (input == ".") {
            break;
        }

        stack<char> C;

        bool IsYes = true;
        for (char e : input) {
            if (e == '(' || e == '[') {
                C.push(e);
            }
            if (e == ']') {
                if (!C.empty() && C.top() == '[') {
                    C.pop();
                }
                else
                {
                    IsYes = false;
                    break;
                }
            }
            if (e == ')') {
                if (!C.empty() && C.top() == '(') {
                    C.pop();
                }
                else
                {
                    IsYes = false;
                    break;
                }
            }
        }

        if (IsYes && C.empty()&&input[input.size()-1]=='.') {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}
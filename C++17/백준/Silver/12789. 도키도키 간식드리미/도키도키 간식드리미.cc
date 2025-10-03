#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;     
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        q.push(x);
    }

     
    int need = 1;        

    while (!q.empty()) {
        if (q.front() == need) {        
            q.pop();
            need++;
        }
        else if (!s.empty() && s.top() == need) {
            s.pop();
            need++;
        }
        else {                           
            s.push(q.front());
            q.pop();
        }
    }
    while (!s.empty() && s.top() == need) {
        s.pop();
        need++;
    }

    cout << (need == n + 1 ? "Nice" : "Sad");
    return 0;
}
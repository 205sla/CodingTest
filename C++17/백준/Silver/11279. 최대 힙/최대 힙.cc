#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0,input;
    priority_queue<int> pq;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> input;
        if (input) {
            pq.push(input);
        }
        else
        {

            if (!pq.size()) {
                cout << "0\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;  
    
}



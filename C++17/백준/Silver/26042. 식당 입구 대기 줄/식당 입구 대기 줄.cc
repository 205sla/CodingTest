#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n, input, max = 0,maxNum=0;
    queue<int> q;
    cin >> n;
    for (int i = 0; i < n;i++) {
        cin >> input;
        if (input == 1) {
            cin >> input;
            q.push(input);
            if (q.size() > max || (q.size() == max && maxNum > input)) {
                max = q.size();
                maxNum = q.back();
            }
            
        }
        else
        {
            q.pop();
        }
    }
    cout << max << " " << maxNum;
}



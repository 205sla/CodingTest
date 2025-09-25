#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n,t, input,count=0;
    vector<int> v;
    cin >> n >> t;
    count = 0;
    for (int i = 0;i < n * 2;i++) {
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < t;i++) {
        cin >> input;
        count += input-1;
        count %= (n * 2);
        cout << v[count]<<" ";
    }

}



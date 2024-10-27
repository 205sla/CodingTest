#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

void p(vector<vector<int>> v1) {
    for (auto e : v1) {
        cout << e[0] << " "<<e[1]<<endl;
    }

}
int main() {
    int num = 0, time = 0;
    int c = 0;
    cin >> num;
    vector<vector<int>> v;
    for (int i = 0; i < num; i++) {
        vector<int> temp;
        int a, b;
        cin >> a >> b;
        temp.push_back(b);
        temp.push_back(a);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    
    for (auto e : v) {
        if (time <= e[1]) {
            c++;
            time = e[0];
        }
    }
    cout << c;
}


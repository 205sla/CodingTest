#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
int main() {
    int a, b;
    int arr[1001];
    cin >> a >> b;
    for (int i = 0; i < a; i++) cin >> arr[i];
    sort(arr, arr + a);
    cout << arr[a - b];
    
    
}

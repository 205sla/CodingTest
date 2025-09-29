#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <queue>


bool is_prime(int k);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int M,N,count=0;
    cin >> M >> N;
    for (int i = M;i <= N;i++) {
        if (is_prime(i)) cout << i<<"\n";
    }

    

}

bool is_prime(int k) {
    if (k == 1) return false;
    for (int i = 2; i * i <= k; i++) {
        if(k%i==0) return false;
    }
    return true;
}


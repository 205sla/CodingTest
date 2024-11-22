#include <bits/stdc++.h>
using namespace std;

//205.kr
int n,cnt=0;
bool isused1[40];
bool isused2[40];
bool isused3[40];
void func1(int cur){
    if(cur==n){
        cnt++;
        return;
    }

    for(int i=0; i<n;i++){
        if(isused1[i] || isused2[i+cur]||isused3[cur -i +n-1]){
            continue;
        }
        isused1[i]=1;
        isused2[i+cur]=1;
        isused3[cur -i +n-1]=1;
        func1(cur+1);
        isused1[i]=0;
        isused2[i+cur]=0;
        isused3[cur -i +n-1]=0;
        
    }
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    

    cin>>n;
    func1(0);
    cout<<cnt;


}
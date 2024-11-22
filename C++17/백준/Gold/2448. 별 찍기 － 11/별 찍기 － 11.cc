#include <bits/stdc++.h>
using namespace std;

//205.kr
int B[6150][6150];
void func1(int a, int x, int y){
    if(a==3){
        B[x][y] = 1;
		B[x + 1][y - 1] = 1;
		B[x + 2][y - 2] =1;
		B[x + 2][y - 1] = 1;
		B[x + 2][y] = 1;
		B[x + 2][y + 1] =1;
		B[x + 2][y + 2] = 1;
		B[x + 1][y + 1] = 1;
    }else{
        func1( a / 2,x, y);
		func1(a / 2,x + a / 2, y -a / 2);
		func1(a / 2,x + a / 2, y + a / 2);


    }

}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int inpt;
    cin>>inpt;
    func1(inpt, 0, inpt-1);

    for(int i=0; i<inpt;i++){
        for(int j=0;j<inpt*2-1;j++){
            if(B[i][j]!=1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }


}
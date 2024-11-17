
#include <iostream>

using namespace std;

int main()
{
    
    int T, N, sum=0;
    cin>>T>>N;
    for(int i=0; i<N;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }

    cout <<  (T<=sum?"Padaeng_i Happy":"Padaeng_i Cry");
    return 0;
}

#include<iostream>
using namespace std;

int main()
{    long long res=0;
    int k,n,w;cin>>k >>n >>w;
    for(int i=1;i<=w;i++){
    res+=k*i;
    }
    if(res<=n){
        cout<<'0';
    }
    else
    cout<<res-n;
    return 0;
}
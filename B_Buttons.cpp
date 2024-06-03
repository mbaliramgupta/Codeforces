#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        res+=(i+1)*(n-i)-i;
    }
    cout<<res;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n,c=0,h=0;
    cin>>n;
    while(c+h<n){
        h++;
        c+=h;
        n-=c;
    }
    cout<<h;
    return 0;
}
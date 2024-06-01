#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--){
        string x;
        cin>>x;
        int d=x[0]-'0';
        int n=x.size();
         int total=10*(d-1);
         total+=n*(n+1)/2;
         cout<<total<<"\n";
    }
    return 0;
}
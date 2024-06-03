#include<iostream>
using namespace std;

int main()
{
    int m,n,x;
    while(cin>>m>>n){
        if(n>m) 
        x=-1;
        else{
            if(m%2==0){
                x=m/2;
            }
            else
                x=(m/2)+1;
         while(x%n!=0){
            x++;
         }
        }
    }
    cout<<x;
    return 0;
}
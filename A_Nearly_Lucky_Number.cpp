#include<iostream>
using namespace std;

int main()
{   int count=0;
    long long n;cin>>n;
   while(n!=0){
    if(n%10==4||n%10==7){
        count++;
        }
        n/=10;
   }
    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   
    return 0;
}
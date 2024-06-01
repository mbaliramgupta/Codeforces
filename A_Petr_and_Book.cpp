#include<iostream>
using namespace std;

int main()
{
   
    int n,i=0;
    cin>>n;
     int  v[7];
    for(int i=0;i<7;i++)
        cin>>v[i];
        int count=v[0];
     while(count<n){
        i++;
        i%=7;
         count+=v[i];
         
     }
     cout<<i+1<<"\n";
        
    return 0;
}
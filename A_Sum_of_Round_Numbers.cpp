#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int temp=n;
        int len=0;
        while(temp!=0){
            temp/=10;
            len++;
        }
        temp=n;
        int count=0;
        int arr[len];
        for(int i=len-1;i>=0;i--){
            arr[i]=temp%10;
            temp/=10;
            if(arr[i]!=0)
            {
                count++;
            }
        } 
        cout<<count<<"\n";
        for(int i=0;i<len;i++)
        {
            if(arr[i]!=0)
            {
                cout<<arr[i]*pow(10,len-i-1)<<" ";
            }
        }
        cout<<"\n";
    }
return 0;
}
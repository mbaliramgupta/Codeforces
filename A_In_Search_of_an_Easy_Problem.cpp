#include<iostream>
using namespace std;

int main()
{int count=0;
int lmt=0;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        else if(arr[i]==1){
            lmt++;
        }
    }
    if(lmt>0){
    cout<<"HARD";
}
    else if(count>0){
        cout<<"EASY";
    }
    
    return 0;
}
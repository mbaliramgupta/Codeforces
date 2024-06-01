#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s,x;
    cin>>x;
    for(int i=0;i<5;i++){
        cin>> s;
        if(x[0]==s[0]||x[1]==s[1]){
            cout<<"YES";
            return 0; }
    }
    cout<<"NO";
    
    
    return 0;
}
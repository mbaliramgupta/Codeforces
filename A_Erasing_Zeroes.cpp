#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        int prev=-1;
        int res=0;
       cin>>s;
       for(int i=0;i<s.size();i++){
          if(s[i]=='1'){
            if(prev!=-1) res+=(i-prev-1);
            prev=i;

          }
       }
       cout<<res<<"\n";
    }
    return 0;
}
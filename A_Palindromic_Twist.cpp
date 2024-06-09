#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k,h;
    cin>>k;
    bool b;
    while(k--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=n/2;
        b=true;
        for(int i=0;i<k;i++){
          h=(int)abs(s[i]-s[n-i-1]);
          if(h!=0 && h!=2){
                b=false;
                cout<<"NO\n";
                break;
          }
        }
        if(b){
            cout<<"YES"<<"\n";
        }
         }
    return 0;
}
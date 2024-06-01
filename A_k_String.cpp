#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k;cin>>k;
    string n;
    cin>>n;
    char ch;
    int count=0;
    int l=n.size();
    sort(n.begin(),n.begin()+n.size());
    for(int i=0;i<n.size();i++){
        if(i%k==0)
        ch=n[i];
        if(n[i]==ch)
        count++;
    }
    if(l==count && count%k==0){
        for(int i=0;i<k;i++){
            for(int c=0;c<n.size();c+=k){
                cout<<n[c];
            }
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}
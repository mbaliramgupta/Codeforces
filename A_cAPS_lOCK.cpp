#include<iostream>
using namespace std;

int main()
{
    string s;
    char u;
    bool c=true;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(islower(s[i])){
            c=false;
        }
    }
    if(c==true){
        for(int j=0;j<s.size();j++){
            if(islower(s[j]))
                u=toupper(s[j]);
            else
                u=tolower(s[j]);
                cout<<u;
            
        }
    }
    else{
        cout<<s;
    }
    return 0;
}
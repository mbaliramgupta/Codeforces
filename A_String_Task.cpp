#include<iostream>
#include<vector>
using namespace std;

int main()
{    string s;
     cin>>s;
     int n=s.size();
     for(int i=0;i<n;i++){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'o' || s[i] == 'O' || 
           s[i] == 'y' || s[i] == 'Y' || s[i] == 'e' || s[i] == 'E' || 
           s[i] == 'u' || s[i] == 'U' || s[i] == 'i' || s[i] == 'I') 
        {
            continue;
        }
        cout<<".";
        cout<<(char)tolower(s[i]);
     }
    return 0;
}
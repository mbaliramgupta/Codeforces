#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{   unordered_set<char> s;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
       s.insert(n[i]);
    }
    int size=s.size();
    if(size%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[101];
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')
        continue;
        else{
            arr[count++]=s[i]-'0';
        }
    }
    sort(arr,arr+count);
    for(int i=0;i<count;i++){
        cout<<arr[i];
        if(i==count-1)
        break;
         cout<<"+";
    }
   
    return 0;
}
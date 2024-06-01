#include<iostream>
using namespace std;
int game(int a,int b){
    if(b%a!=0){
        return -1;
    }
    int ratio=b/a;;
    int count=0;
    while(ratio%2==0){
        ratio/=2;
        count++;
    }
    while(ratio%3==0){
        ratio/=3;
        count++;
    }
    if(ratio==1){
        return count;
    }
    else 
    return -1;
   }
int main()
{  int n,m;
cin>>n >>m;
   cout<<game(n,m);
    return 0;
}
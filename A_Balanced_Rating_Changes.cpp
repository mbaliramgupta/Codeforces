#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int odd=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)odd++;
    }
    odd=odd/2;
    for(auto x: v){
        if(x%2){
            if(odd>0) odd--,x--;
            else
            x++;
        }
        cout<<x/2<<"\n";
    }
    return 0;
}
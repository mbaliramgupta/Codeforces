#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll find(int n,vector<int> &v){
    int maxi=INT_MAX;
    ll total=0;
    for(int i=n-1;i>=0;--i){
      maxi=min(maxi-1,v[i]);
      if(maxi<=0)
      break;
      total+=maxi;
    }
    return total;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
      long long s=find(n,v);
      cout<<s;
    return 0;
}
#include<iostream>
#include<algorithm>
#define ll long long
#include<vector>
using namespace std;

int main()
{
    ll k,l,n;
    cin>>k;
    while(k--){
        cin>>n;
      ll idx=n;
      n=n*2;
      vector<ll> v;
      for(int i=0;i<n;i++){
        cin>>l;
        v.push_back(l);
      }
      sort(v.begin(),v.end());
      ll ans=abs(v[idx-1]-v[idx]);
      cout<<ans<<"\n";

    }
    return 0;
}
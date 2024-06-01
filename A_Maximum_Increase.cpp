#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=1;
    int res=1;
    while(r<n){
        if(v[r]>v[r-1]){
            res=max(res,r-l+1);
            r++;
    }
    else{
        l=r;
        r++;
    }
   
}
cout<<res;
 return 0;
}
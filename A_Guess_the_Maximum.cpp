#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
      while(n--){
        int a;
        cin>>a;
        vector<long long> v(a);
        vector<long long> ans;
        for(int i=0;i<=a-1;i++){
            cin>>v[i];
        }
        for(int i=1;i<=a-1;i++){
             ans.push_back(max(v[i-1],v[i]));
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]-1<<endl;
    }
    return 0;
}
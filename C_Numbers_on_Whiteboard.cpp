#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>val;
        for(int i=1;i<=n;i++)
            val.push_back(i);
        vector<int>res;
        while(val.size()>1){
            int s=val.size();
            int sum=val[s-1]+val[s-2];
            res.push_back(val[s-1]);
            res.push_back(val[s-2]);
            val.pop_back();
            val.pop_back();
            if(sum%2==1) val.push_back(sum/2+1);
            else val.push_back(sum/2);
        }
        cout<<val.back()<<endl;
        for(int i=0;i<res.size();i+=2)
        {
            cout<<res[i]<<" "<<res[i+1]<<endl;
        }
    }
    return 0;
}
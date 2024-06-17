#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    int n,k,t;
    pair<int,int> c;
    vector<pair<int,int>> d;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>t;
        c=make_pair(t,i);
        d.push_back(c);
    }
    sort(d.begin(),d.end());
    int sum=0,count=0;
    for(auto a:d){
        sum+=a.first;
        if(sum>k)
        break;
        count++;
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<d[i].second<<" ";
    }

    return 0;
}
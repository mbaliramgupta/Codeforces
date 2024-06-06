#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int rainy(int n,vector<int> v,int x,int y){
    for(int i=0;i<n;++i){
        bool isnotrainy=true;
        for(int j=max(0,i-x);j<i;++j){
            if(v[i]>=v[j]){
                isnotrainy=false;
                break;
            }
        }
        for(int k=i+1;k<min(n,i+y+1);++k){
            if(v[i]>=v[k]){
                isnotrainy=false;
                break;
            }
        }
        if(isnotrainy){
            return i+1;
        }
    }
     return -1;

}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int result=rainy(n,v,x,y);
    cout<<result<<endl;

 return 0;
}
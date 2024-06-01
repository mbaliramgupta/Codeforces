#include<iostream>
#include<vector>
using namespace std;

int main()
{   int count=0;
    int n;cin>>n;
    vector<string> x(n);
    for(int i=0;i<n;i++){
     cin>>x[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]=="Tetrahedron"){
             count+=4;
        }
        else if(x[i]=="Cube"){
            count+=6;
        }
        else if(x[i]=="Octahedron"){
            count+=8;
        }
        else if(x[i]=="Dodecahedron"){
            count+=12;
        }
        else if(x[i]=="Icosahedron"){
            count+=20;
        }
    }
    cout<<count;
    return 0;
}
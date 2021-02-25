#include<bits/stdc++.h>
#define lld long long int
using namespace std;


int main()
{
    //freopen("a.txt","r",stdin);
    lld n,i,pi;
    cin>>n;
    map<int,int>data;
    for(i=1;i<=n;i++){
        cin>>pi;
        data[pi]=i;
    }
    for(auto it=data.begin();it!=data.end();it++){
        cout<<it->second<<" ";
    }
    
    return 0;
}

#include<bits/stdc++.h>
#define lld long long int
using namespace std;

bool calculate(lld resource){
    lld n,price,i;
    bool flag=false;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>price;
        if(price<resource)flag=true;
    }
    return flag;
}

int main()
{
    //freopen("a.txt","r",stdin);
    lld n,resource,i;
    cin>>n>>resource;

    map<int,bool>data;

    for(i=1;i<=n;i++){
        if(calculate(resource)){
            data[i]=true;
        }
    }
    cout<<data.size()<<endl;
    for(auto it=data.begin();it!=data.end();it++){
        cout<<it->first<<" ";
    }
    cout<<endl;
    
    return 0;
}

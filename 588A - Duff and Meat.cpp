#include<bits/stdc++.h>
using namespace std;
int main(){
    int total=0,n,m=1e9,q,p;
    cin>>n;
    while(n--){
        cin>>q>>p;
        if(m>p)m=p;
        total+=(q*m);
    }
    cout<<total<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>data;
    map<int,int>::iterator it;
    int t,i,level,x,n;
    cin>>t;
    while(t--){
        data.clear();
        cin>>n;
        x=n;
        while(x--){
            cin>>level;
            data[level]++;
        }
        it=data.begin();
        cout<<n-it->second<<endl;
    }
    return 0;
}

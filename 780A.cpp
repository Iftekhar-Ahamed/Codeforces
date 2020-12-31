#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    int i,x,max=-1,count=0,ans=-1;
    cin>>n;
    bool arra[n+1];
    memset(arra,false,sizeof arra);
    for(i=0;i<n*2;i++){
        cin>>x;
        if(arra[x]){
            arra[x]=false;
            count--;
        }else{
            arra[x]=true;
            ++count;
            ans=ans<count?count:ans;
        }
    }
    cout<<ans;
    return 0;
}

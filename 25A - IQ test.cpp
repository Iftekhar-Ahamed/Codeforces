#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){

    //freopen("input.txt","r",stdin);

    lld i,count1=0,count2=0,num,n,pos1,pos2;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>num;
        if(num%2==0){
            count1++;
            pos1=i;
        }else{
            count2++;
            pos2=i;
        }
    }
    if(count2>count1){
        cout<<pos1<<endl;
    }else cout<<pos2<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,num,sum=0,count=0,count2=0,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        sum+=abs(abs(num)-1);
        if(0>num)count++;
        else if(num==0)count2++;
    }
    x=count%2;
    if(x<=count2){
        x=0;
    }else{
        x-=count2;
    }
    cout<<sum+(x*2)<<endl;
    //main();
    return 0;
}

#include<bits/stdc++.h>
#define lld long long int
using namespace std;


int main()
{
    //freopen("a.txt","r",stdin);
    lld n,i,pi,j,count=0;
    cin>>n;
    int home[n],guest[n];
    for(i=0;i<n;i++)
        cin>>home[i]>>guest[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(home[i]==guest[j])count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

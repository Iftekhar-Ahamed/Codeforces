#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    long long n,k,i,sum=0,j,ans;


    cin>>n>>k;
     int arr[n+1];
    for(i=1; i<=n; i++)
        cin>>arr[i];
    int c_sum[n+1];
    for(i=1; i<=n; i++)
    {
        sum+=arr[i];
        c_sum[i]=sum;
    }
    int temp=INT_MAX;
    c_sum[0]=0;
    for(j=k; j<=n; j++)
    {


        int t1=c_sum[j]-c_sum[j-k];
        //cout<<c_sum[j-k]<<" "<<c_sum[j]<<endl;
        if(t1<temp){
                temp=t1;
                ans=j-k+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
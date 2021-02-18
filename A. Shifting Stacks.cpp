#include<bits/stdc++.h>
using namespace std;
bool solve()
{
    long long int sum=0,i,n;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)cin>>array[i];

    for(i=0; i<n; i++)
    {
        sum+=array[i]-i;
        if(sum<0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(solve())cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

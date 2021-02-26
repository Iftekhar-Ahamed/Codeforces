#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);

    lld n,t,a=1,b,ans=0;
    cin>>n>>t;
    while (t--)
    {
        cin>>b;
        if(a<b){
            ans+=(b-a);
        }else if(a>b){
            ans+=(n-a+b);
        }
        a=b;
    }
    cout<<ans<<endl;
    
    return 0;
}

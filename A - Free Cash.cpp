#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,maxx=-1;
    cin>>n;
    map<pair<int,int>,int>m;
    int t,s,i;
    for(int i=0;i<n;i++)
    {
        cin>>t>>s;
        m[{t,s}]++;
        if(m[{t,s}]>maxx)
            {
                maxx=m[{t,s}];
            }
    }
        cout<<maxx<<endl;
//main();
return 0;
}

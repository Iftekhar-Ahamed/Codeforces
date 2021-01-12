#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arra[n],i;
        bool flag=true;

        for(i=0;i<n;i++)
            cin>>arra[i];

        sort(arra,arra+n);

        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
             if(!(arra[i+1]-arra[i]<=1)){
                 cout<<"NO"<<endl;
                 flag=false;
                 break;
              }
            }
            if(flag)
             cout<<"YES"<<endl;
        }

    }
}

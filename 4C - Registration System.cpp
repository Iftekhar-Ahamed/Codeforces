#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    //freopen("a.txt","r",stdin);
    string s;
    lld t;
    map<string,int>data;
    cin>>t;
    while (t--)
    {
        cin>>s;
        if(data[s]==0){
            cout<<"OK\n";
            data[s]++;
        }else{
            cout<<s<<data[s]<<endl;
            data[s]++;
        }

    }
    return 0;
}

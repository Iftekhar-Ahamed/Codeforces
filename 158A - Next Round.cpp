#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[70] ,i, n,k,j=0;

    cin>>n>>k;
    for(i=1; i<=n; ++i)
        cin>>arr[i];

    for(i=1; i<=n; ++i)
        if(arr[i] >= arr[k]  && arr[i] != 0) ++j;
    cout<<j<<endl;
    return 0;
}

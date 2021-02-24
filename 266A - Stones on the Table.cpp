#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0,n;
    char array[60];
    cin>>n;
    cin>>array[0];

    for(i=1;i<n;i++){
        cin>>array[i];
        if(array[i]==array[i-1])count++;
    }
    cout<<count<<endl;
    //main();
    return 0;
}

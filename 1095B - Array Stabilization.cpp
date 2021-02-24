#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)cin>>array[i];
    sort(array,array+n);
    cout<<min((array[n-2]-array[0]),(array[n-1]-array[1]))<<endl;
    //main();
    return 0;
}

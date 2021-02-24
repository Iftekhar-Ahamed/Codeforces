#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    int i,count=0,temp;
    cin>>n>>k;
    int array[n];
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    temp=array[0];
    for(i=1; i<n; i++)
    {

        if(temp<array[i])
        {
            temp=array[i];
            count=0;
        }
        count++;
        if(count==k)
            break;


    }
    cout<<temp<<endl;
    return 0;
}

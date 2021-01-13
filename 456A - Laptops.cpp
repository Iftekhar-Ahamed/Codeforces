#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    pair<int,int>laptop[n];
    for(i=0;i<n;i++)scanf("%d%d",&laptop[i].first,&laptop[i].second);
    sort(laptop,laptop+n);
    for(i=0;i<n-1;i++){
        if(laptop[i].first<laptop[i+1].first&&laptop[i].second>laptop[i+1].second){
            printf("Happy Alex\n");
            return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}

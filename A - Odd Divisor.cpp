#include<bits/stdc++.h>
using namespace std;
bool solve(long long int n){
    if(n==1)return true;
    if(n%2==0)return solve(n/2);
    else return false;
}
int main(){
    long long int number,t;
    cin>>t;
    while (t--)
    {
        cin>>number;
        if(!solve(number))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

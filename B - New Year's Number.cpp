#include<bits/stdc++.h>
using namespace std;
bool solve(long long int n){
    int x;
    if(n%2020==0||n%2021==0)return true;
    else if(n<2020)return false;
    while (n%2020!=0&&n>=2020)
    {
       n-=2021;
    }
    
    //cout<<n<<endl;
    if(n%2020==0||n==0)return true;
    else return false;
}
int main(){
    long long int number,t;
    cin>>t;
    while (t--)
    {
        cin>>number;
        if(solve(number))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

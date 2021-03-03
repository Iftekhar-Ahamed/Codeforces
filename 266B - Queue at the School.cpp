#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
using namespace std;
void solve(string &s){
    int i,n=s.size();
    for(i=0;i<n;i++){
        if(i+1<n && s[i]=='B'&&s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i++;
        }
    }
}
int main(){
    //read;write;
    int t;
    cin>>t;
    cin>>t;
    string s;
    cin>>s;
    while (t--)
    {
        solve(s);
    }
    cout<<s<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
char pev;
char solve(char c){
    if(pev=='1'&&c=='0'){
        pev='0';
        return '0';
    }
    else if(pev=='1'&&c=='1'){
        pev='2';
        return '1';
    }
    else if(pev=='2'&&c=='0'){
        pev='1';
        return '1';
    }
    else if(pev=='2'&&c=='1'){
        pev='1';
        return '0';
    }
    else if(pev=='0'&&c=='0'){
        pev='1';
        return '1';
    }
    else if(pev=='0'&&c=='1'){
        pev='2';
        return '1';
    }else{
        if(c=='0')pev='1';
        else pev='2';
        return '1';
    }
}
int main(){
    string b;
    int t,i,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>b;
        i=0;
        pev=' ';
        string a;
        while (b[i])
        {
            a+=solve(b[i]);
            i++;
        }
        cout<<a<<endl;
        
    }
    return 0;
}

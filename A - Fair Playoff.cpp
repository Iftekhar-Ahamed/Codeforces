#include<iostream>
using namespace std;
int main(){
    int t,x1,y1,x2,y2;
    cin>>t;
    while (t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(max(x1,y1)<min(x2,y2)||min(x1,y1)>max(x2,y2)){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}

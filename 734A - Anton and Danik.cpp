#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,danik=0,anton=0;
    char c;
    cin>>i;
    while (i--)
    {
        cin>>c;
        if(c=='A')anton++;
        else danik++;
    }
    if(anton==danik)cout<<"Friendship"<<endl;
    else if(anton>danik)cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    
    //main();
    return 0;
}

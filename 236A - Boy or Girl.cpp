#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char c;
    map<char,int>data;
    while (scanf("%c",&c)&&c!='\n')
    {
        data[c]++;
    }
    if(data.size()%2==0){
        cout<<"CHAT WITH HER!\n";
    }else{
        cout<<"IGNORE HIM!\n"<<endl;
    }
    
    //main();
    return 0;
}

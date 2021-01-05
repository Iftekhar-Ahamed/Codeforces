#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    bool flag=false;
    vector<int>trace;
    char ch;
    scanf("%d",&n);
    getchar();
    while (n--){
        scanf("%c",&ch);
        if(ch=='B'){
            count++;
            flag= true;
        } else if(ch=='W'&&flag){
            trace.push_back(count);
            count=0;
            flag= false;
        }
    }
    if(count>0)trace.push_back(count);
    printf("%d\n",trace.size());
    for(int i=0;i<trace.size();i++)printf("%d ",trace[i]);
    return 0;
}

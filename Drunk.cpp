#include<bits/stdc++.h>
using namespace std;
bool dfs(string src,map<string,vector<string>>&graph,map<string,int>&visit)
{
    stack<string>st;
    st.push(src);
    visit[src]=1;
    while(!st.empty())
    {
        string u = st.top();
        st.pop();
        for(auto it: graph[u]){
            if(visit[it]==0){
                st.push(it);
                visit[it]=1;
            }else if(visit[it]==1){
                return true;
            }

        }

    }
    return false;
}
int main()
{
    int t;
    freopen("0_input.txt", "r", stdin);
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        map<string,vector<string>>graph;
        map<string,int>visit;
        int  n;
        cin>>n;
        string pre,hav;
        while(n--)
        {
            cin>>pre>>hav;
            graph[pre].push_back(hav);
            visit[pre]=visit[hav]=0;
        }
        bool f =true;
        for(auto it : visit)
        {
            if(!it.second)
            {
                if(dfs(it.first,graph,visit))
                {
                    f= false;
                    break;
                }else{
                    visit[it.first]=2;
                }
            }
        }
        if(f){
            cout<<"Case "<<i<<": Yes"<<endl;
        }else{
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
}

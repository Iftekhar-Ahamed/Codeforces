#include <bits/stdc++.h>
#define fi first
#define se second
double begintime, endtime;

using namespace std;
inline void CALC_TIME()
{    
    endtime = clock();
    cout<<"\nexecution time : "<<(endtime-begintime+1)/1000<<" s";
}
typedef pair<int, int> pii;
int m, n, k, a[1008][1008];
bool ck[1008][1008];
int h1[8]{0, 0, 1, -1, 1, -1, 1, -1};
int h2[8]{1, -1, 0, 0, 1, -1, -1, 1};
stack<pii>s;
struct paint{
    int x, y, col;
};
stack<paint>ans;
pii tmp, tam;
int check(int x, int y)
{
    if(x < 2 || y < 2 || x > n || y > m)return -1;
    int tmp = a[x][y] | a[x-1][y] | a[x][y-1] | a[x-1][y-1];
    if(a[x][y] && a[x][y] != tmp)return -1;
    if(a[x-1][y] && a[x-1][y] != tmp)return -1;
    if(a[x][y-1] && a[x][y-1] != tmp)return -1;
    if(a[x-1][y-1] && a[x-1][y-1] != tmp)return -1;
    return tmp;
}
int main()
{
    begintime = clock();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(ck, false, sizeof(ck));
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
            if(check(i, j) != -1)
            {
                s.push({i, j});
                ck[i][j] = true;
                ans.push({i-1, j-1, a[i][j]});
            }
        }
    while(!s.empty())
    {
        tam = s.top();
        s.pop();
        a[tam.fi][tam.se] = a[tam.fi-1][tam.se-1] = a[tam.fi-1][tam.se] = a[tam.fi][tam.se-1] = 0;
        for(int c = 0; c < 8; c++)
        {
            tmp = {tam.fi+h1[c], tam.se+h2[c]};
            if(!ck[tmp.fi][tmp.se] && check(tmp.fi, tmp.se) != -1)
            {
                ck[tmp.fi][tmp.se] = true;
                s.push(tmp);
                ans.push({tmp.fi-1, tmp.se-1, check(tmp.fi, tmp.se)});
            }
        }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(a[i][j])
            {
                cout<<-1;
                return 0;
            }
    cout<<ans.size()<<'\n';
    while(!ans.empty())
    {
        cout<<ans.top().x<<' '<<ans.top().y<<' '<<ans.top().col<<'\n';
        ans.pop();
    }
    return 0;
}
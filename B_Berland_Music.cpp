/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Iftekhar Ahamed Siddiquee
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_map>
using namespace std;

#define read freopen("0_input.txt","r",stdin)
#define write freopen("0_output.txt","w",stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1000000
#define test long long int ct;cin>>ct;while(ct--)
const double pi = acos(-1.0);

void solve(){
    lld n,i,j;
    string s;
    cin>>n;
    vector<pair<lld,lld>>ans,like,dislike;
    vector<lld>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            like.push_back({a[i],i});
        }else{
            dislike.push_back({a[i],i});
        }
    }
    sort(like.begin(),like.end());
    sort(dislike.begin(),dislike.end());
    lld count=1;
    for (i = 0; i <dislike.size() ; i++)
    {
        ans.push_back({dislike[i].second,count++});
    }
    for (i = 0; i <like.size() ; i++)
    {
        ans.push_back({like[i].second,count++});
    }
    
    sort(ans.begin(),ans.end());
    for(i=0;i<n;i++){
        cout<<ans[i].second<<" ";
    }
    cout<<endl;

}
int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    test{
        solve();
    }
    return 0;
}
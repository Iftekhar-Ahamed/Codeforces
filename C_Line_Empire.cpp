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
#define mXs 1e6
#define test long long int ct;cin >> ct;while (ct--)
const double pi = acos(-1.0);


void solve(){
    lld n,a,b,num,sum=0;
    cin>>n>>a>>b;
    vector<lld>v(n+1);
    for(lld i=1;i<n+1;i++){
        cin>>v[i];
        sum+=num;
    }
    lld ans = 1e18;
    for(lld i=0;i<n+1;i++){
        lld t = (a+b)*v[i];
        sum-=v[i];
        t += (sum-(n-i-1)*v[i]) * b;
        ans = min(ans,t);
    }
    cout<<ans<<endl;
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
/*
* do something instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
*/
/* Final check before submit :
1. array size or integer overflow,like uninitialised 0 index.
2. Think twice,code once.check all possible counter test case.
3. Be careful about corner case! n=1?k=1? something about 0?
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
5. if got WA than remember that you are missing something common.
*** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;
*/
/* IF WA???
1. corner case! n=1?k=1? something about 0?
2. check code(avoid stupid mistake)
3. read the statement again(if there any missing point???)
4. check the idea(check all possible counter test case again!!!)
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
6. don't waste too much time. move to next problem
*/
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char s[200001];
int main() {
 int t;
 scanf("%d",&t);
 while(t--){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  ++n;
  vector<int> v(n);
  ll sum=0;
  for(int i=1;i<n;++i){
   scanf("%d",&v[i]);
   sum+=v[i];
  }
  ll res=1e18;
  for(int i=0;i<n;++i){
   ll cur = (a+b)*(ll)v[i];
   sum-=v[i];
   cur+=;
   res=min(res,cur);
  }
  printf("%lld\n",res);
 }
 return 0;
}*/
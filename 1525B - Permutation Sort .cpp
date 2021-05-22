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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 52
const double pi = acos(-1.0);
int Ara[mXs];
void solve(){
    lld n,i;
    bool flag=false;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>Ara[i];
        if(Ara[i]!=i)flag=true;
    }
    if(flag){
        if(Ara[1]==n && Ara[n]==1){
            cout<<3<<endl;
        }else if(Ara[1]==1 || Ara[n]==n){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }else{
        cout<<0<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    lld t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}

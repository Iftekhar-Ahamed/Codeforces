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
const double pi = acos(-1.0);
lld a[10000000];

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    vector<lld>vec[250];
    lld mx=LONG_MIN;
    for(lld i=1; i<=1000020; i++)
    {
        for(lld j=i; j<=1000020; j+=i)
        {
            a[j]=a[j]+1;
        }
    }
    for(lld i=1; i<=1000000; i++)
    {
        vec[a[i]].push_back(i);
    }
    for(lld i=1; i<=240; i++)
    {
        sort(vec[i].begin(),vec[i].end());
    }
    lld t;
    cin >> t;
    while (t--)
    {
        lld l,r,x,cont=0;
        cin>>l>>r>>x;
        if(x>240)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(vec[x].size()==0)
        {
            cout<<"0"<<endl;
            continue;
        }


        lld mc=upper_bound(vec[x].begin(),vec[x].end(),r)-vec[x].begin();
        lld mi=lower_bound(vec[x].begin(),vec[x].end(),l)-vec[x].begin();
        cout<<mc-mi<<endl;


    }
    return 0;
}
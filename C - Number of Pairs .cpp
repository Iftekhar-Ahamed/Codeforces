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

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 1000000
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t, n, l, r, i, tt, count;
    vector<int> data;
    cin >> t;
    while (t--)
    {
        data.clear();
        cin >> n >> l >> r;
        count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> tt;
            if (tt <= r)
                data.push_back(tt);
        }
        sort(data.begin(), data.end());
        n=data.size();
        for (i = 0; i < n; i++)
        {
            lld x = data[i] >= (l - data[i]) ? data[i] : (l - data[i]), y = r - data[i];
            lld lr=lower_bound(data.begin(),data.end(),x)-data.begin(),hr=upper_bound(data.begin(),data.end(),y)-data.begin();
            if(lr<=i)lr=i+1;
            if(hr<=lr)continue;
            count+=hr-lr;
        }
        cout<<count<<endl;
    }

    return 0;
}

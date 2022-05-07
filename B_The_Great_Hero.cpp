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

#define read freopen("0_input.txt", "r", stdin)
#define write freopen("0_output.txt", "w", stdout)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mXs 100000
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld t, n, hh, hp, i;

    cin >> t;
    while (t--)
    {
        lld c = 0;
        cin >> hp >> hh >> n;
        vector<pair<lld,lld>>data(n);
        for (i = 0; i < n; i++)
            cin >> data[i].first;
        for (i = 0; i < n; i++)
            cin >> data[i].second;
        sort(data.begin(),data.end());
        for (i = 0; i < n; i++)
        {
            if (hh<=0)
            {
                c++;
                break;
            }

            lld a = (data[i].second+hp-1) / hp, b = (hh+data[i].first-1) / data[i].first;

            lld x = min(a, b);

            hh -= (data[i].first * x);
            data[i].second-=(hp * x);

            // cout<<"Hero health :"<<a<<" Monster health :"<<b<<endl<<"Monster Power :"<<mp[i]<<" Hero Power :"<<hp<<endl;

        }
        if (c != 0 || data[n-1].second>0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
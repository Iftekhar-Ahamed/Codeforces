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
const int mXs = 1e7;
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld n, m, i, sum = 0, attack, defense, ans, h1, h2;

    cin >> n;
    vector<lld> v(n);

    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    cin >> m;

    for (i = 0; i < m; i++)
    {
        cin >> attack >> defense;
        lld pos = lower_bound(v.begin(), v.end(), attack) - v.begin();

        if (attack <= v[n - 1])
        {

            if (v[pos] == attack || pos == 0 )
            {

                ans = (sum - v[pos]);

                if (ans >= defense)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << (defense - ans) << endl;
                }
            }
            else
            {
                lld an1;

                if ((sum - v[pos]) >= defense)
                {
                    ans = 0;
                }
                else
                {
                    ans = defense - (sum - v[pos]);
                }

                an1 = attack - v[pos - 1];

                if ((sum - v[pos - 1]) < defense)
                {
                    an1 += defense - (sum - v[pos - 1]);
                }

                cout << min(ans, an1) << endl;
            }
        }else{
            cout<<(attack-v[n-1])+((sum-v[n-1])>=defense?0:defense-(sum-v[n-1]))<<endl;
        }
    }
    return 0;
}

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
#define mXs 1e6
const double pi = acos(-1.0);

void solve()
{
    lld n, i, j, k, l, r, t2, pev;
    string s;
    cin >> n >> t2;
    cin >> s;
    while (t2--)
    {
        bool f = false;

        cin >> l >> r;
        if (r - l != n - 1)
        {
            for (i = l - 2; i >= 0; i--)
            {
                if (s[i] == s[l - 1])
                {
                    f = true;
                    break;
                }
            }
            for (j = r ; j < n && !f; j++)
            {
                if (s[j] == s[r - 1])
                {
                    f = true;
                    break;
                }
            }
        }

        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
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
#define mXs 1000000
#define test          \
    long long int ct; \
    cin >> ct;        \
    while (ct--)
const double pi = acos(-1.0);

int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld n, m, i, x, ans = 0;
    vector<pair<bool, pair<int, int>>> data(100, {false, {0, 0}});
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        data[x - 1].first = true;
        data[x - 1].second.first++;
    }
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> x;
        data[x - 1].first = true;
        data[x - 1].second.second++;
    }
    for (i = 0; i < 99; i++)
    {
        x = min(data[i].second.second, data[i].second.first);
        ans += x;
        data[i].second.second -= x;
        data[i].second.first -= x;

        x = min(data[i].second.second, data[i + 1].second.first);
        ans += x;
        data[i].second.second -= x;
        data[i + 1].second.first -= x;

        x = min(data[i].second.first, data[i + 1].second.second);
        ans += x;
        data[i].second.first -= x;
        data[i + 1].second.second -= x;
    }
    x = min(data[99].second.second, data[99].second.first);
    ans += x;
    data[99].second.second -= x;
    data[99].second.first -= x;
    cout << ans << endl;

    return 0;
}
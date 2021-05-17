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
const double pi = acos(-1.0);
void solve()
{
    lld n, x, i, j, sum = 0;
    cin >> n >> x;
    vector<lld> data(n);
    for (i = 0; i < n; i++)
    {
        cin >> data[i];
        sum += data[i];
    }
    if (sum == x)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        queue<lld> trace;
        sum=0;
        for (i = 0; i < n; i++)
        {
            sum += data[i];
            if (sum == x)
            {
                sum -= data[i];
                trace.push(i);
            }
            else
            {
                cout << data[i] << " ";
            }
        }
        while (!trace.empty())
        {
            cout << data[trace.front()] << " ";
            trace.pop();
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    lld t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

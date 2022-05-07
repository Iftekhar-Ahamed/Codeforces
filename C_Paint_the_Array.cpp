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

int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld t, x, y, i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<lld> data(n+1);
        bool flag = false;
        for (i = 1; i <= n; i++)
            cin >> data[i];
        x = data[1];
        y = data[2];
        for (i = 3; i <= n; i++)
        {
            if (i % 2)
            {
                x = __gcd(x, data[i]);
            }
            else
            {
                y = __gcd(y, data[i]);
            }
        }
        for (i = 2; i <= n ; i += 2)
        {
            if (data[i] % x)
            {
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            flag=false;
            for (i = 1; i <= n; i += 2)
            {
                if (data[i] % y)
                {
                    continue;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            x=y;
        }

        // cout<<x<<" "<<y<<endl;
        if (flag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}
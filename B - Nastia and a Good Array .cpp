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
    int i, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        int ara[n];
        for (i = 0; i < n; i++)
            cin >> ara[i];
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        cout << (n % 2 == 0 ? n / 2 : ((n / 2) + 1)) << endl;
        for (i = 0; i < n; i += 2)
        {
            if (n - 1 == i)
            {
                cout << i << " " << i + 1 << " " << min(ara[i], ara[i - 1]) << " " << 1000000007 << endl;
            }
            else
            {
                cout << i + 1 << " " << i + 2 << " " << 1000000007 << " " << min(ara[i], ara[i + 1]) << endl;
                ara[i + 1] = min(ara[i], ara[i + 1]);
                ara[i] = 1000000007;
            }
        }
    }

    return 0;
}

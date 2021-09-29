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
    //read;
    //write;
    ios_base::sync_with_stdio(false);

    lld t, n, i, j, one, two;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        vector<int> data;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                data.push_back(i);
            }
        }

        if (data.size()== 2 || data.size()== 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<string> ans(n, string(n, '='));

            for (i = 0; i < n; i++)
            {
                ans[i][i] = 'X';
            }
            cout << "YES" << endl;
            for (i = 0; i < data.size(); i++)
            {
                ans[data[i]][data[(i + 1) % data.size()]] = '+';
                ans[data[(i + 1) % data.size()]][data[i]] = '-';
            }
            for (i = 0; i < n; i++)
                cout << ans[i] << endl;
        }
    }

    return 0;
}

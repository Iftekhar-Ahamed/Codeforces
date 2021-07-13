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
const int mXs = 3001;
const double pi = acos(-1.0);
bool arra[mXs + 1];
vector<int> prime;
int solve[mXs + 1];
bool primefact(int n)
{
    int i, siz = prime.size(), count = 0, t = sqrt(n);
    bool flag = false;

    for (i = 0; i < siz; i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
                n /= prime[i], flag = true;
            count++;
        }
        if (count > 2)
            return false;
    }
    if (count == 2)
        return true;
    return false;
}
void seive(lld x)
{
    lld i, j;
    memset(arra, true, sizeof(arra));

    for (i = 4; i <= x; i += 2)
    {
        arra[i] = false;
    }

    for (i = 3; i * i <= x; i++)
    {
        if (arra[i])
        {
            for (j = i * i; j <= mXs; j += (i + i))
            {
                arra[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (i = 3; i <= x; i += 2)
    {
        if (arra[i])
        {
            prime.push_back(i);
        }
    }
    solve[0] = 0;
    for (i = 1; i <= x; i++)
    {
        if (!arra[i] && primefact(i))
        {
            solve[i] = 1 + solve[i - 1];
        }
        else
        {
            solve[i] = solve[i - 1];
        }
    }
}

int main()
{
    cin.tie(NULL);
    //read;
    //write;
    ios_base::sync_with_stdio(false);
    lld t, x;
    //cout<<solve.size()<<endl;

    cin >> x;
    seive(x);
    cout << solve[x] << endl;

    return 0;
}

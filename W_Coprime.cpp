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
#define test          \
    long long int ct; \
    cin >> ct;        \
    while (ct--)
const double pi = acos(-1.0);

vector<pair<bool, vector<lld>>> seiveWithCoprime(lld n)
{
    lld i, j;
    vector<pair<bool, vector<lld>>> data(n);
    for (i = 0; i < n; i++)
    {
        data[i].first = false;
    }

    for (i = 2; i < n; i++)
    {
        if (!data[i].first)
        {
            for (j = i; j < n; j += i)
            {
                data[j].second.push_back(i);
                data[j].first = true;
            }
        }
    }
    return data;
}

int main()
{
    cin.tie(NULL);
    // read;
    // write;
    ios_base::sync_with_stdio(false);
    lld x, n, count = 0, i, gcd = 0;
    cin >> n;
    i = n;
    set<lld> trace;
    vector<pair<bool, vector<lld>>> prime = seiveWithCoprime(1000000 + 1);
    bool pwc = true;

    while (i--)
    {
        cin >> x;
        gcd = __gcd(gcd, x);
        if (pwc)
        {
            for (auto it : prime[x].second)
            {
                if (trace.count(it))
                {
                    pwc=false;
                    break;
                }else{
                    trace.insert(it);
                }
            }
        }
    }

    if (pwc)
    {
        cout << "pairwise coprime" << endl;
    }
    else if (gcd == 1)
    {
        cout << "setwise coprime" << endl;
    }
    else
    {
        cout << "not coprime" << endl;
    }
    return 0;
}
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
/* Final check before submit :
1. array size or integer overflow,like uninitialised 0 index.
2. Think twice,code once.check all possible counter test case.
3. Be careful about corner case! n=1?k=1? something about 0?
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
5. if got WA than remember that you are missing something common.
*** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;
*/
/* IF WA???
1. corner case! n=1?k=1? something about 0?
2. check code(avoid stupid mistake)
3. read the statement again(if there any missing point???)
4. check the idea(check all possible counter test case again!!!)
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
6. don't waste too much time. move to next problem
*/

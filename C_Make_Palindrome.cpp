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
    string s;
    lld n, i, j;
    cin >> s;
    n = s.size();
    map<char, int> data;
    for (i = 0; i < n; i++)
        data[s[i]]++;
    string ans;
    vector<char> ch;

    for (auto it = data.begin(); it != data.end(); it++)
    {
        if (it->second % 2)
        {
            it->second--;
            ch.push_back(it->first);
        }
        for (j = 0; j < it->second / 2; j++)
        {
            ans.push_back(it->first);
        }
    }
    for (i = 0; i < ch.size() / 2; i++)
        ans.push_back(ch[i]);
    sort(ans.begin(),ans.end());
    string tem = ans;
    reverse(tem.begin(), tem.end());
    if (ch.size() % 2)
    {
        ans.push_back(ch[ch.size() / 2]);
    }
    
    ans += tem;
    cout << ans << endl;
    return 0;
}
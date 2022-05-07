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
    string s[3];
    for (lld i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    int ans[3];
    memset(ans, 0, sizeof(ans));

    for (lld i = 0; i < 3; i++)
    {
        if (s[i][1] == '<')
        {
            ans[s[i][2] - 'A']++;
        }
        else
        {
            ans[s[i][0] - 'A']++;
        }
    }
    if (ans[0] == ans[1] || ans[2] == ans[1] || ans[2] == ans[0])
    {
        cout << "Impossible" << endl;
    }
    else
    {
       map<int,char>xx;
       for(lld i=0;i<3;i++){
           xx[ans[i]]=char('A'+i);
       }
       for(auto it=xx.begin();it!=xx.end();it++){
           cout<<it->second;
       }
       cout<<endl;
       
    }

    return 0;
}
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

int main()
{
    ios_base::sync_with_stdio(false);
    lld t,n,i;
    string s="989";
    cin>>t;
    while (t--)
    {
        cin>>n;

        if(n<=3){
            cout<<s.substr(0,n)<<endl;
        }else{
            cout<<s;
            n-=3;
            for(i=0;i<n;i++){
                cout<<i%10;
            }
            cout<<endl;
        }
    }
    
    return 0;
}

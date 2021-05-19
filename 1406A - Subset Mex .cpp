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
lld A[102];
lld solve(){
    memset(A,0,sizeof(A));
    lld n,i,mex1=-1,mex2=-1,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        A[temp]++;
    }
    for(i=0;i<=100;i++){
        if(A[i]==1 && mex1==-1){
            mex1=i;
        }else if(A[i]==0 && mex2==-1){
            mex2=i;
            return mex2+(mex1==-1?i:mex1);
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    lld t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    
    return 0;
}

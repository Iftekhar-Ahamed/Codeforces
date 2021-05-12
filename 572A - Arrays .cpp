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
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
void takeinput(lld array[],lld n){
    lld i;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
}
bool compare(lld B[],lld s,lld x,lld m){
    lld i;
    for(i=0;i<s;i++){
        if(B[i]>x)break;
    }
    if(s-i>=m)return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    //read;
    //write;
    lld s1,s2,n,m,i;
    cin>>s1>>s2;
    cin>>n>>m;
    lld A[s1],B[s2];
    takeinput(A,s1);
    takeinput(B,s2);
    lld x=A[n-1];
    if(compare(B,s2,x,m)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}

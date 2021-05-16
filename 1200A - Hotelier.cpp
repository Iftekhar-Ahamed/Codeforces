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
    lld n,i,j,k;
    cin>>n;
    char ch;
    lld array[10];
    memset(array,0,sizeof(array));
    for(i=0;i<n;i++){
        cin>>ch;
        if(ch=='L'){
            for(j=0;j<10;j++){
                if(array[j]==0){
                    array[j]=1;
                    break;
                }
            }
        }else if(ch=='R'){
            for(j=9;j>=0;j--){
                if(array[j]==0){
                    array[j]=1;
                    break;
                }
            }
        }else{
            array[ch-'0']=0;
        }
    }
    for(i=0;i<10;i++){
        cout<<array[i];
    }
    cout<<endl;
    return 0;
}

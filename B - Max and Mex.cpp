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
#define MEM(a, b) memset(a, (b), sizeof(a))
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
map<int ,bool>::iterator it;

void find_max_min(map<int ,bool>&trace,int &min){
  min=0;
  for(it=trace.begin();it!=trace.end();it++){
    if(it->first==min)min++;
  }
}

void solve(){
  map<int,bool>trace;
  int n,k,ans,ma=-1,mi,a,pevma=-1,pevmi=-1;
  cin>>n>>k;

  while (n--)
  {
    cin>>a;
    trace[a]=true;
    if(ma<a)ma=a;
  }
  if(trace.size()==1){
    it=trace.begin();
    if(it->first==0){
      cout<<k+1<<endl;
      return;
    }
    else if(it->first==1){
      cout<<1<<endl;
      return;
    }
  }
  while (k--)
  {
    find_max_min(trace,mi);
    if(mi+ma==pevmi+pevma){
      cout<<trace.size()<<endl;
      return;
    }else if(abs(ma-mi)==1){
      cout<<trace.size()+k+1<<endl;
      return;
    }else{
      pevmi=mi,pevma=ma;
    }
    ans=ceil(double(double(ma+mi)/(2.0)));
    if(ans>ma)ma=ans;
    trace[ans]=true;
  }
  cout<<trace.size()<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	//read;write;
  lld t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  
    
	return 0;
}

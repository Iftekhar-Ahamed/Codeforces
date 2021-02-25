#include<bits/stdc++.h>
#define lld long long int
using namespace std;


int main()
{
    //freopen("a.txt","r",stdin);
	lld i,ans = -1e10, n, k, t, f;
	cin>>n>>k;
	for(i=0;i<n;i++) {
		cin>>f>>t;
		if(t > k)
			ans = max(ans, f-(t-k));
		else
			ans = max(ans, f);
	}
	
	cout<<ans<<endl;
	
	return 0;
}

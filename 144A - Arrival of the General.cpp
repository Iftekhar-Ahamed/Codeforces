#include<bits/stdc++.h>
#define lld long long int
using namespace std;


int main()
{
    //freopen("a.txt","r",stdin);
	lld ans=0,n,i,max=-1e10,_posmax=0,min=1e10,_posmin=-1e10,temp;

	cin>>n;
	for(i=1;i<=n;i++){
		cin>>temp;
		if(temp>max){
			max=temp;
			_posmax=i;
		}
		if(temp<=min){
			min=temp;
			_posmin=i;
		}
	}
	if(_posmin<_posmax){
		ans=(_posmax-1)+(n-_posmin)-1;
	}else{
		ans=(_posmax-1)+(n-_posmin);
	}

	cout<<ans<<endl;
	
	return 0;
}

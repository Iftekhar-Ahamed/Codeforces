#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,max=-1,min=10000000,n,c=0,x;
	cin>>n;
	cin>>x;
	min=max=x;
	for(i=1;i<n;i++){
		cin>>x;
		if(x>max){
			max=x;
			c++;
		}else if(min>x){
			min=x;
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}

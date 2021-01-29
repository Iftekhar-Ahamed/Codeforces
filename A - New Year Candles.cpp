#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,r,c=0;
	cin>>x>>y;
	c=x;
	while (x>=y)
	{
		r=x%y;
		x=x/y;
		c+=x;
		x+=r;
	}
	cout<<c<<endl;
	//main();
	return 0;
}

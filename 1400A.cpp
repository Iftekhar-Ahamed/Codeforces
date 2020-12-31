#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,i,t;
	cin>>t;
	while(t--){
      cin>>n>>s;
      int t=((2*n)-1)/2;
	  for(i=0;i<n;i++){
        printf("%c",s[t]);
	   }
	   printf("\n");
	}
    return 0;
}

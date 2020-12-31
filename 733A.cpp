#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int max=0,f=1;
	cin >> s;
	int l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
			if(f>max) max=f;
			f=1;
		}else{
			f++;
		}
	}
	if(f>max) max=f;
	cout << max;
    return 0;
}

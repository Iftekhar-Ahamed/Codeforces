#include <bits/stdc++.h>
    #include <math.h>
 
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    # define M_PI  3.14159265358979323846
 
 
    const int M=1e9+7;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }
 
    ll modPow(ll a, ll b){
        if(b==0)
            return 1LL;
        if(b==1)
            return a%M;
        ll res=1;
        while(b){
            if(b%2==1)
                res=mul(res,a);
            a=mul(a,a);
            b=b/2;
        }
        return res;
    }
 
 
    void solve (){
        ll A,B,n;
        cin>>A>>B>>n;
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++) cin>>a[i].first;
        for(int i=0;i<n;i++) cin>>a[i].second;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(B<=0) {
                cout<<"NO"<<"\n";
                return;
            }
            ll k1=a[i].second/A;
            ll k2=a[i].second%A;
            ll k3=B/a[i].first;
            ll k4=B%a[i].first;
            if(k4) k3++;
            if(k2) k1++;
            k1=min(k1,k3);
            ll x=k1*a[i].first;
            B-=x;
            a[i].second-=k1*A;
            // cout<<"in "<<b[i]<<"\n";
        }
        if(a[n-1].second>0) cout<<"NO"<<"\n";
        // if(B<0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
        freopen("0_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
        //    cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }
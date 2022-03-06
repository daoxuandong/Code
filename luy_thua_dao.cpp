#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod= 1e9+7;
ll n;
ll POW(ll n, ll k){
    if(k==0) return 1;
    if(k==1) return n;
    ll t=POW(n, k/2);
    if(k%2==0) return t%mod * t%mod;
    return (t%mod * t %mod) *n %mod;
}
void solve(){
    cin >> n;
    ll tmp=0,m=n;
    while(n!=0){
        tmp*=10;
        tmp+=n%10;
        n/=10;
    }
    cout<<POW(m, tmp)<<endl;
}
int main()
{
    
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}




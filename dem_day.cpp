#include<bits/stdc++.h>
#define max 100
using namespace std;
const long long mod= 123456789;
long long n;
long long POW(long long n, long long k){
    if(k==0) return 1;
    if(k==1) return n;
    long long t=POW(n, k/2);
    if(k%2==0) return t%mod * t%mod;
    return (t%mod * t %mod) *n %mod;
}
void solve(){
    cin >> n;
    cout<<POW(2, n-1)<<endl;
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




#include<bits/stdc++.h>
using namespace std;
const long long mod =1e9+7;
int n,k;
void solve(){
    cin >> n >> k;
    if(k > n){
        cout << 0 << '\n';
        return;
    }
    long long res = 1;
    for(int i = n ; i >= n - k + 1 ; i--)
        res = (res * i) % mod;
    cout << res << '\n';
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


#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define FOR(i,a,b) for(int i=a; i<=b ; i++)
#define FO(i,a,b) for(int i=a; i<b ; i++)
#define FORD(i,a,b) for(int i=a; i>=b ; i--)
#define FOD(i,a,b) for(int i=a; i>b ; i--)
#define PI 3.141592653589793238
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<string>
int n;
ll k;
int check(int n, ll k){
    ll tmp=pow(2,n-1);
    if(tmp==k) return n;
    else if(tmp > k) return check(n-1, k);
    return check(n-1,k-tmp);
}
void solve(){
    cin >> n>>k;
    cout<<check(n,k)<<endl;
}
int main()
{
    faster();
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}




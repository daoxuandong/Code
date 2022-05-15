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
int n,m,k;
void solve(){
    cin >> n;
    ll a[n+5],b[n+5];
    FO(i, 0, n) {
        cin>>a[i];
    }
    FO(i, 0, n-1) {
        cin>>b[i];
    }
    for(int i = 0 ; i < n - 1 ; i++){
            if(a[i] != b[i]){
                cout << i + 1 << endl;
                return;
            }
    }
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




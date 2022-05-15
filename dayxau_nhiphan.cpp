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
ll F[100];
void Fibo(){
    F[1] = 1;
    F[2] = 1;
    for(int i = 3 ; i < 93 ; i++)
        F[i] = F[i - 1] + F[i -2];
}
char check(int n, ll k){
    if(n==1) return '0';
    if(n==2) return '1';
    if ( k <= F[n-2] ) return check(n-2, k);
    return check(n-1, k-F[n-2]);
}
void solve(){
    cin >> n>>k;
    cout<<check(n,k)<<endl;
}
int main()
{
    faster();
    Fibo();
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

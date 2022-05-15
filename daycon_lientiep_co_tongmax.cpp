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
void solve(){
    
    cin >> n;
    int a[n+5];
    FO(i, 0, n) cin>>a[i];
    int sum = 0, MAX = -1;
    FO(i ,0,n){
        sum += a[i];
        if(sum <= 0) sum = 0;
        MAX = max(MAX,sum);
    }
    cout << MAX << endl;
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




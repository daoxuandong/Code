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
    cin >> n>>k;
    int a;
    vi ans;
    FO(i, 0, n) {
        cin>>a;
        ans.push_back(a);
    }
    if(k<ans[0]) cout<<"-1";
    else{
        int tmp = lower_bound(ans.begin(), ans.end(), k) - ans.begin() ;
        if(ans[tmp]==k) cout<<tmp+1;
        else cout<<tmp;
    }
    cout<<endl;
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




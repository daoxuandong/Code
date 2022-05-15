#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b ; i++)
#define FO(i,a,b) for(int i=a; i<b ; i++)
#define FORD(i,a,b) for(int i=a; i>=b ; i--)
#define FOD(i,a,b) for(int i=a; i>b ; i--)
//123 124 125 126 134 135 136 145 146 156 234 235 236 245 246 256 345 346 356 456
//123 124 125 134 135 145 234 235 245 345
//1234 1235 1236 1245 1246 1256 1345 1346 1356 1456 2345 2346 2356 2456 3456

void solve() {
    int n;
    cin>>n;
    int a[n+5];
    FO(i, 0, n) cin>>a[i];
    vector<string> ans;
    FO(i, 0, n){
        string s="[";

        FO(j, 0, n-i){
            s+=to_string(a[j]);
            if(j<n -i - 1) s+=" ";
            a[j]+=a[j+1];
        }
        s+="]";
        ans.push_back(s);
    }
    FORD(i, ans.size()-1, 0) cout<<ans[i]<<" ";
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






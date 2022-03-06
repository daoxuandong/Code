#include<bits/stdc++.h>
using namespace std;
int n,m,k;
void solve(){
    cin >> n;
    int a;
    multiset<int> ans;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.insert(a);
    }
    cout<<ans.count(0)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}




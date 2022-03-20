#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(){
    cin >> n >> m;
    vector<int>a(n);
    for(auto &z : a)cin>>z;
    vector<int>b(m);
    for(auto &z : b)cin>>z;
    vector <int> res(n + m - 1,0);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            res[i + j] += (a[i] * b[j]);
        }
    }
    for(auto x : res) cout << x << ' ';
    cout << '\n';
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

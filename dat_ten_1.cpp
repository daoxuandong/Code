#include<bits/stdc++.h>
#define max 100
#define FOR(i,a,b) for(int i=a; i<=b ; i++)
using namespace std;
int n,a[100],k,m;
set<string> vt;
string s;
void in(){
    FOR(i, 1, k) {
        auto it = vt.begin();
        advance(it, a[i]-1);
        cout<<*it<<" ";
    }
    cout<<endl;
}
void Try(int i){
    FOR(j, a[i-1]+1, n-k+i){
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
void solve() {
    cin>>m>>k;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    while(ss>>s){
        vt.insert(s);
    }
    n=vt.size();
    Try(1);
}
int main()
{

    int t=1;

    while (t--)
    {
        solve();
    }
}

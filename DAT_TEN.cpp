#include<bits/stdc++.h>
using namespace std;
int n,a[100],k,m;
set<string> vt;
string s;
void in(){
    for(int i=1;i<=k;i++) {
        auto it = vt.begin();
        advance(it, a[i]-1);
        cout<<*it<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
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



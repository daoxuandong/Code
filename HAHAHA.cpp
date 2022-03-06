#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void Try(int n,string s){
    
    if(s.size() >n)
        return;
    if(s[n-1]=='H')
        return;
    if(s.size()==n && s[n-1]=='A') {
       cout<<s<<endl;
        return;
    }
    if (s[s.size()-1]=='H') Try(n,s+"A");
    else {
        Try(n,s+"A");
        Try(n, s+"H");
        
    }
}
void solve() {
    cin>>n;
    s="H";
    Try(n,s);
}
int main()
{
    //faster();
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


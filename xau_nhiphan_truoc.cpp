#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int i = s.length() - 1;
    if ((s[i])=='1') s[i]='0';
    else {
        while(s[i]=='0') {
            s[i]='1';
            i--;
        }
        if(i>=0) s[i]='0';
    }
    cout<<s<<endl;
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

#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int n;
void Try(string s,int x){
    if(x>3 || s.size() > n) return;
    if(s.size() == n && s[s.size()-1]=='6'){
        cout<<s<<endl;
    }
    if(s[s.size()-1]=='8'){
        Try(s+'6', x+1);
    }
    else {
        Try(s+'6', x+1);
        Try(s+'8', 0);
    }
}
void solve(){
    cin>>n;
    Try("8",0);
    
}
int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
}



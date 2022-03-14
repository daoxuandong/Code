#include<bits/stdc++.h>
using namespace std;
string s;
int n,a[100];
bool chuaxet[100]={true};
void in(){
    for(int i=1;i<=s.length();i++) cout<<s[a[i]-1];
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=s.length();j++){
        if(!chuaxet[j]){
            a[i]=j;
            chuaxet[j]=true;
            if(i==s.length()) in();
            else Try(i+1);
            chuaxet[j]=false;
        }
    }
}
void solve() {
    cin>>s;
    Try(1);
    cout<<endl;
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

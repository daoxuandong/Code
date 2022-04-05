#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;
void in(){
    for(int i=1;i<=k;i++) cout<<char(a[i]+64) ;
    cout<<endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n+k-i;j++){
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
void solve() {
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=i;
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


